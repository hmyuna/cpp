
#include"object.h"
#include<algorithm>
#include<functional>
namespace gravitation
{
	std::list<object*> object::allobj;
	data_type object::dt(0.00002);					//计算间隔，越小越精确，速度越慢
	const data_type object::G(1);					//设为1容易计算

	object::object(data_type mass,					//质量
					data_type radius,				//半径
					const vector position,			//位置
					const vector velocity)			//速度
					:_mass(mass),_radius(radius),_position(vector(position)),_velocity(vector(velocity)),_acceleration(vector())
	{
		it=allobj.insert(allobj.end(),this);		//记录
	}

	object::~object()
	{
		allobj.erase(it);
	}

	//指向向量
	vector operator-(const object& lhs,const object& rhs)
	{
		return lhs.position()-rhs.position();
	}

	//距离
	data_type object::distance(const object& obj)const
	{
		return (obj.position()-this->position()).magnitude();
	}

	//计算加速度
	int object::calcacce()
	{
		_acceleration=vector();														//清零
		for(std::list<object*>::iterator i=allobj.begin();i!=allobj.end();++i)								//合加速度
		{
			if(*i!=this)
			{
				if(this->distance(**i)>(this->radius()+(*i)->radius()))				//未发生碰撞
				_acceleration+=														//a=sqrt(GM/(r*r))
					vector((**i)-(*this),(*i)->mass()*G
						/(((this->position()-(*i)->position()).magnitude())
						 *((this->position()-(*i)->position()).magnitude())));
				else if(this->position()!=(*i)->position())
					zoarium(*this,**i);												//碰撞合体
			}
		}
		return 0;
	}

	//设置计算间隔
	void object::setdt(const data_type& val)
	{
		dt=val;
	}

	int object::step()
	{
		_position+=_velocity*dt;
		_velocity+=_acceleration*dt;
		return 0;
	}

	//步进
	void stepforward()
	{
		std::for_each(object::allobj.begin(),object::allobj.end(),std::mem_fun(&object::calcacce));		//计算加速度
		std::for_each(object::allobj.begin(),object::allobj.end(),std::mem_fun(&object::step));
	}


	//合体
	void zoarium(object& ob1,object& ob2)
	{
		ob1.position(ob1.position()+((ob2.position()-ob1.position())*(ob2.mass()/(ob1.mass()+ob2.mass()))));		//按质量确定位置
		ob2.position(ob1.position());
		ob1.velocity((ob1.velocity()*ob1.mass()+ob2.velocity()*ob2.mass())*(1/(ob1.mass()+ob2.mass())));			//动量守恒
		ob2.velocity(ob1.velocity());
	}
}

