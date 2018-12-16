
#ifndef OBJECT_H
#define OBJECT_H

#include"vector.h"
#include<list>

namespace gravitation
{
	class object
	{
		friend void stepforward();							//步进
		friend void zoarium(object&,object&);				//碰撞合体
	public:
		object(data_type mass=0,							//质量
			data_type radius=0,								//半径
			const vector position=vector(),				//位置
			const vector velocity=vector());				//速度
		~object();

		data_type mass()const					{return _mass;}
		data_type radius()const					{return _radius;}
		vector position()const					{return _position;}
		vector velocity()const					{return _velocity;}
		vector acceleration()const				{return _acceleration;}

		void mass(const data_type& value)		{_mass=value;}
		void radius(const data_type& value)		{_radius=value;}
		void position(const vector& vec)		{_position=vec;}
		void velocity(const vector& vec)		{_velocity=vec;}

		data_type distance(const object&)const;				//距离


		static void setdt(const data_type&);				//计算间隔

	private:
		data_type _mass;						//质量
		data_type _radius;						//半径

		vector _position;						//圆心
		vector _velocity;						//速度
		vector _acceleration;					//加速度

		static std::list<object*> allobj;		//储存所有object的地址

		static data_type dt;					//计算间隔

		static const data_type G;				//万有引力常数

		std::list<object*>::iterator it;
		
		object(const object&);					//禁止复制
		object &operator=(const object&);

		//计算加速度
		int calcacce();
		int step();
	};
	

	vector operator-(const object&,const object&);//指向向量

}

#endif