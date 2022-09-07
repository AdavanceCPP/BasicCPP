#include <iostream>
using namespace std;
#include "plot.h"


class House: public Plot
{
	public:

	void fun2()
	{
		cout <<"Added new feature in Derived class" <<endl;
	}
	void fun1()
	{
		cout <<"Supress the existing feature in derived class" <<endl;
	}
};


int main()
{
	House h1;

	h1.Plot::fun1();
	h1.fun1();
	h1.fun2();
}
