#include "Vector3.h"
#include <iostream>
using namespace std;
int main( )
{
	Vector3 v1( 1 , 2 , 3 ) , v2( 1 , 4 , 3 );
	bool IsEqual = (v1 == v2);
	if ( IsEqual )
		cout << "v1 == v2" << endl;
	else
		cout << "v1 != v2" << endl;
	Vector3 v3 =  v1 / 3;
	v3.print( );
	v1.print( );


	
	system( "pause" );
	return 0;
}