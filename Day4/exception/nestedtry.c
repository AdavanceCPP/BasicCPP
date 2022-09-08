#include <iostream>
#include <cstdlib>
using namespace std;


void fun4()
{
	//if( cond)...

	throw 10;
	cout <<"Inside fun4" <<endl;
}
void fun3()
{
	fun4();
	cout <<"Inside fun3" <<endl;
}
void fun2()
{	
	try
	{
		fun3();
	}
	catch(int e)
	{
		cout <<"Inside catch block  of fun2 int e" <<endl;

	}
	throw 5;
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
	cout <<"Back to main" <<endl;
	return 0;
}



