#pragma once
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
	//Vector3 operator
	void zero( ); //重置为零向量

	void print( );
public:
	float x;
	float y;
	float z;
};