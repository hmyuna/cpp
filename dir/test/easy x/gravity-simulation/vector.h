
#ifndef VECTOR_H
#define VECTOR_H

#define for if(0);else for	//修复VC6 BUG

namespace gravitation
{
	
	typedef double data_type;									//数据类型

	//向量或点
	class vector
	{
		friend bool operator==(const vector&,const vector&);
		friend vector operator-(const vector&,const vector&);	//指向向量
	public:
		vector(data_type=0,data_type=0,data_type=0);
		vector(const vector&);
		vector(const vector&,data_type);						//方向，大小

		const data_type& x()const{return _x;}
		const data_type& y()const{return _y;}
		const data_type& z()const{return _z;}

		void set(data_type x=0,data_type y=0,data_type z=0){_x=x;_y=y;_z=z;}

		vector& operator=(const vector&);
		vector& operator+=(const vector&);
		vector& operator*=(const data_type&);			//数乘
		
		bool samedirection(const vector&)const;			//方向一致
		vector direction()const;						//获取方向
		data_type magnitude()const;						//获取大小
		void setmagnitude(const data_type&);			//设置大小
		data_type distance(const vector&)const;			//获取距离
	private:
		data_type _x,_y,_z;
	};

	vector operator+(const vector&,const vector&);
	vector operator*(const vector&,const data_type&);

	inline bool operator==(const vector& lhs,const vector& rhs)
	{
		return lhs._x==rhs._x&&lhs._y==rhs._y&&lhs._z==rhs._z;
	}

	inline bool operator!=(const vector& lhs,const vector& rhs)
	{
		return !(lhs==rhs);
	}
}
#endif