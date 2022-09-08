#include <iostream>
#include <thread>
using namespace std;
void fun1(int x,int y)
{
	while (1)
	{
		cout << "in fun1" << endl;
		cout << "running fun1" << endl;
		cout << x << "   " << y << endl;
	}
}
void fun2()
{
	while (1)
	{
		cout << "in fun2" << endl;
		cout << "running fun2" << endl;
	}
}
int main()
{
	thread t1(fun1,111,222);
	thread t2(fun2);
	t1.join();
	t2.join();

}

