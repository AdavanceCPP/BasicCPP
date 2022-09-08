#include <iostream>
using namespace std;

template <class T1,class T2>
T1 add(T1 x, T2 y)
{
	cout <<"Inside different type " <<endl;
	T1 r;
	r = x +y;
	return r; 
}
/*
template <class T>
T add(T x, T y)
{
	cout <<"Same Type" <<endl;
	T r;
	r = x +y;
	return r; 
}

int add(double x, double y)
{
	cout <<"Inside specialized function" <<endl;
	return x+y;
}
*/
int main()
{
	int x;
	float f;
	double d;
	int i;

	x = add(10,20);//
	f = add(20.5f,30.6f);
	d = add(120.5,130.6);
	i = add(5,6);
	cout << i <<endl;
	cout << x <<endl;
	cout << f <<endl;
	cout << d <<endl;
	i = add(5.6,6);
	cout << i <<endl;

	return 0;
}












