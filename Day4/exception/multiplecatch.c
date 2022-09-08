#include <iostream>
#include <cstdlib>
using namespace std;
class myexception
{
	const char *p;
	public:
	myexception( const char *s)
	{
		p = s;
	}
	void geterror()
	{
		cout <<"User define exception class" <<endl;
		cout <<p <<endl;
	}
};

void fun4()
{
	int x;
	cout <<"Enter 1 for int, 2 for double, 3 for string" <<endl;

	cin >>x;
	if( x ==1)
		throw 10;
	else if(x == 2)
		throw 10.53;
	else if(x == 3)
		throw "Error";
	else if(x == 4)
	{
		myexception m("error number 4");
		throw m;
	}

	cout <<"Inside fun4" <<endl;
}
void fun3()
{
	fun4();
	cout <<"Inside fun3" <<endl;
}
void fun2()
{	
	fun3();
	cout <<"Inside fun2" <<endl;
}
void fun1()
{
	fun2();
	cout <<"Inside fun1" <<endl;
}
int main()
{
	try
	{
		fun1();
	}
	catch(int e)
	{
		cout <<"Inside catch block int e" <<endl;
	}
	catch(double  e)
	{
		cout <<"Inside catch block double e" <<endl;
	}
	catch(const char *  e)
	{
		cout <<"Inside catch block const char * e" <<endl;
	}
	catch(myexception e)
	{
		cout <<"Inside catch block myexception" <<endl;
		e.geterror();
	}
	
	cout <<"Back to main" <<endl;
	return 0;
}



