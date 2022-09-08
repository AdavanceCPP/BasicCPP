#include <iostream>
using namespace std;

template <class T>
T add(T x, T y)
{
	T r;
	r = x +y;
	
	return r; 
}


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
	cout << x <<endl;
	cout << f <<endl;
	cout << d <<endl;

	return 0;
}












