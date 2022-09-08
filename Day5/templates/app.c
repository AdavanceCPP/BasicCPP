#include <iostream>
using namespace std;
#include "addtemp"


/*
int add(int,int);
float add(float,float);
double add(double,double);
*/
int main()
{
	int x;
	float f;
	double d;
	int i;

	x = add(10,20.5);
	f = add(20.5f,30.6f);
	d = add(120.5,130.6);
	i = add(5,6);
	d = add(5.5,5);
	cout << x <<endl;
	cout << f <<endl;
	cout << d <<endl;

	return 0;
}












