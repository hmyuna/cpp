
#include"vector.h"
#include<cmath>

namespace gravitation
{
	vector::vector(data_type x,data_type y,data_type z):_x(x),_y(y),_z(z){}
	vector::vector(const vector& vec):_x(vec._x),_y(vec._y),_z(vec._z){}

	vector::vector(const vector& vec,data_type val)
	{
		data_type tmp(vec.magnitude());
		_x=vec._x*val/tmp;
		_y=vec._y*val/tmp;
		_z=vec._z*val/tmp;
	}

	vector& vector::operator+=(const vector& vec)
	{
		_x+=vec._x;_y+=vec._y;_z+=vec._z;
		return *this;
	}

	vector& vector::operator=(const vector& vec)
	{
		_x=vec._x;_y=vec._y;_z=vec._z;
		return *this;
	}

	vector operator+(const vector& lhs,const vector& rhs)
	{
		vector ret(lhs);
		ret+=rhs;
		return ret;
	}
	
	vector operator*(const vector& lhs,const data_type& rhs)
	{
		vector ret(lhs);
		ret*=rhs;
		return ret;
	}

	vector& vector::operator*=(const data_type& val)
	{
		_x*=val;_y*=val;_z*=val;
		return *this;
	}

	vector vector::direction()const
	{
		vector ret(*this);
		data_type val(this->magnitude());
		(ret._x)/=val;
		(ret._y)/=val;
		(ret._z)/=val;
		return ret;
	}

	bool vector::samedirection(const vector& vec)const
	{
		return direction()==vec.direction();
	}

	data_type vector::magnitude()const
	{
		return sqrt(_x*_x+_y*_y+_z*_z);
	}

	void vector::setmagnitude(const data_type& val)
	{
		data_type tmp(this->magnitude());
		_x=_x*val/tmp;
		_y=_y*val/tmp;
		_z=_z*val/tmp;
	}

	data_type vector::distance(const vector& vec)const
	{
		return vector(vec._x-_x,vec._y-_y,vec._z-_z).magnitude();
	}

	vector operator-(const vector&lhs,const vector& rhs)
	{
		return vector(lhs._x-rhs._x,lhs._y-rhs._y,lhs._z-rhs._z);
	}
}
