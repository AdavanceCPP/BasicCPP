#include <iostream>
#include <thread>
#include<mutex>
using namespace std;
mutex mu;
void fun1()
{
	int count;
	mu.lock();
	for(count=0;count<1000;count++)
	{
		cout << "in fun1  count -->" <<count<< endl;
	}
	mu.unlock();
	}
void fun2()
{
	int count;
	mu.lock();
	for (count = 0; count<1000; count++)
	{
		cout << "in fun2  count -->" << count << endl;
	}
	mu.unlock();
	
}
int main()
{
	thread t1(fun1);
	thread t2(fun2);
	t1.join();
	t2.join();

}