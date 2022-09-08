#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
void task1()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		cout << "in task1 : my process id is " << getpid()<< endl;
		cout << "running fun1" << endl;
		sleep(2);
	}
}
void task2()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		cout << "in task2 : my process id is " << getpid()<< endl;
		cout << "running fun2" << endl;
		sleep(2);
	}
}
int main()
{
	thread t1(task1);
	thread t2(task2);
//	t1.join();
//	t2.join();
//	fun1();
//	fun2();
}












