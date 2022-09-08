#include <iostream>
#include <thread>
using namespace std;
void fun1()
{
	//int count;
	//for(count=0;count<1000;count++)
	//{
	//	cout << "in fun1  count -->" <<count<< endl;
	//}
	cout << "thread ID1 --> " << this_thread::get_id() << endl;
}
void fun2()
{
	/*int count;
	for (count = 0; count<1000; count++)
	{
		cout << "in fun2  count -->" << count << endl;
	}*/
	cout << "thread ID1 --> " << this_thread::get_id() << endl;
}
int main()
{
	cout << "thread ID main--> " << this_thread::get_id() << endl;
	thread t1(fun1);
	thread t2(fun2);
	cout << "t1 ID = " << t1.get_id() << endl;
	cout << "t2 ID = " << t2.get_id() << endl;
	t1.join();
	t2.join();

}
