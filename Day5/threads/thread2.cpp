#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
int w = 100;
void fun1(int x,int y)
{
	while (1)
	{
		w++;
		cout << "in fun1" << endl;
		cout << "running fun1" << endl;
		cout << x << "   " << y << endl;
		cout << w << endl;
		sleep(2);
	}
}
void fun2()
{
	while (1)
	{
		cout << "in fun2" << endl;
		cout << "running fun2" << endl;
		cout << w << endl;
		sleep(2);
	}
}
int main()
{
	thread t1(fun1,111,222);
	thread t2(fun2);
	t1.join();
	t2.join();

}
