#pragma once
#include <iostream>
using namespace std;

class Vector3
{
public:
	Vector3( );
	Vector3( float nx , float ny , float nz );
	Vector3( const Vector3& v );
public:
	Vector3& operator=( const Vector3& v ); //重载赋值运算符
	bool operator==( const Vector3& other );//重载==运算符
	bool operator!=( const Vector3& other );//重载!= 运算符
	Vector3 operator-( ) const;//重载负号运算符
	Vector3 operator+( const Vector3& other )const; //重载+运算符
	Vector3 operator-( const Vector3& other )const; // 重载-运算符
	Vector3 operator*( float a )const;//重载*运算符;向量与标量相乘 
	Vector3 operator/( float a )const;// 同*类似
	Vector3 operator+=( const Vector3& a );
	Vector3 operator-=( const Vector3& a );
	Vector3 operator*=( float a );
	Vector3 operator/=( float a );
	void	normalize( );
	float operator *( const Vector3& a )const;
	void zero( ); //重置为零向量
	void print( );
public:
	friend inline Vector3 operator *( float k , const Vector3& v );
public:
	inline float vectorMag( const Vector3& a ) // 向量的模
	{
		return sqrt( a.x * a.x + a.y * a.y + a.z * a.z );
	}
	inline Vector3 crossPruduct( const Vector3& a , const Vector3& b )
	{
		return Vector3( a.y * b.z - a.z* b.y ,
			a.z*b.x - a.x*b.z ,
			a.x * b.y - a.y*b.x
		);
	}
	inline float distance( const Vector3& a , const Vector3& b )
	{
		Vector3 v( a.x - b.x , a.y - b.y , a.z - b.z );
		return sqrt( v.x* v.x + v.y*v.y + v.z*v.z );
	}
	
public:
	float x;
	float y;
	float z;
};