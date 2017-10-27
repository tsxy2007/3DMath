#pragma once
using namespace std;

class Vector3
{
public:
	Vector3( );
	Vector3( float nx , float ny , float nz );
	Vector3( const Vector3& v );
public:
	Vector3& operator=( const Vector3& v ); //���ظ�ֵ�����
	bool operator==( const Vector3& other );//����==�����
	bool operator!=( const Vector3& other );//����!= �����
	Vector3 operator-( ) const;//���ظ��������
	Vector3 operator+( const Vector3& other )const; //����+�����
	Vector3 operator-( const Vector3& other )const; // ����-�����
	Vector3 operator*( float a )const;//����*�����;������������ 
	Vector3 operator/( float a )const;// ͬ*����
	//Vector3 operator
	void zero( ); //����Ϊ������

	void print( );
public:
	float x;
	float y;
	float z;
};