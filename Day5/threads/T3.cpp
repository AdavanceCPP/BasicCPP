#include <iostream>
#include <thread>
using namespace std;
void fun1()
{
	int count;
	for(count=0;count<1000;count++)
	{
		cout << "in fun1  count -->" <<count<< endl;
	}
}
void fun2()
{
	int count;
	for (count = 0; count<1000; count++)
	{
		cout << "in fun2  count -->" << count << endl;
	}
}
int main()
{
	thread t1(fun1);
	thread t2(fun2);
	t1.join();
	t2.join();

}
