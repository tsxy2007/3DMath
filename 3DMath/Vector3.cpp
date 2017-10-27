#include "Vector3.h"
#include <iostream>

Vector3::Vector3( ) :  x(0.0f ),y(0.0f ),z(0.0f )
{

}

Vector3::Vector3( float nx , float ny , float nz ) : x(nx ),y(ny ),z(nz )
{

}

Vector3::Vector3( const Vector3& v ) : x(v.x ),y(v.y ),z(v.z )
{
}

Vector3 Vector3::operator-( ) const
{
	return Vector3( -x , -y , -z );
}

Vector3 Vector3::operator-( const Vector3& other ) const
{
	Vector3 nV = -other;
	return *this + nV;
}

Vector3 Vector3::operator*( float a ) const
{
	return Vector3( x*a , y*a , z*a );
}

Vector3 Vector3::operator/( float a ) const
{
	return *this * ( 1 / a );
}

Vector3 Vector3::operator+( const Vector3& other ) const
{
	return Vector3( x + other.x , y + other.y , z + other.z );
}

void Vector3::zero( )
{
	x = y = z = 0.f;
}

void Vector3::print( )
{
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	cout << "Z= " << z << endl;
}

bool Vector3::operator!=( const Vector3& other )
{
	return x != other.x || y != other.y || z != other.z;
}

bool Vector3::operator==( const Vector3& other )
{
	return x == other.x && y == other.y && z == other.z;
}

Vector3& Vector3::operator=( const Vector3& v )
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
