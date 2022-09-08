#include <iostream>
using namespace std;

template <class Type1>
Type1 add(Type1 x, Type1 y)
{
	Type1 r;
	r = x+y;
	return r;
}
int main()
{
	int x;
	float f;
	double d;
	int i;

	x = add(10,20);
	f = add(20.5f,30.6f);
	d = add(120.5,130.6);
	i = add(5,6);
	cout << x <<endl;
	cout << f <<endl;
	cout << d <<endl;

	return 0;
}












