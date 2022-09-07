#include <iostream>
#include <cstdlib>
using namespace std;

class Plot
{
	
	protected:
	void fun1()
	{
		cout <<"Existing feature in fun1 of BAse" <<endl;
	}
	public:
	void fun2()
	{
		cout <<"Existing feature in fun2 of Base" <<endl;
	}
};
class House : protected Plot
{
	protected:
	void fun3()
	{
		cout <<"New  feature in fun3 of Derv" <<endl;
	}
	public:
	void fun4()
	{
		fun1();
		fun3();
		cout <<"New feature in fun4 of Derv" <<endl;
	}
};
int main()
{
	House h1;
	h1.fun4();
	return 0;
}



