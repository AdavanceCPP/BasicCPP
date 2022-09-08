#include <iostream>
using namespace std;
#define SIZE 3

template <typename T>// same as template <class T>
struct STACK
{
private:
	T stack[3];
	int sp;
public:
	STACK()
	{
		sp =0;
	}
	void push(T item)
	{
		if (sp == SIZE)
		{
			cout <<"STack full" <<endl;
			return;
		}
		stack[sp++] = item;

	}
	void pop()
	{
		if (sp == 0)
		{
			cout <<"STack Empty" <<endl;
			return;
		}
		cout<< stack[--sp]<<endl;
	}

};

STACK <int>s1;// s1 is an objec which maintains array of integers
int main()
{
STACK <double>s2;// s2 is an object which maintains array of doubles 
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.pop();
	//s1.sp = 5;
	s1.pop();
	s1.pop();
	s1.pop();

	s2.push(56.46543);
	s2.push(36.46543);
	s2.push(86.46543);
	s2.push(26.46543);
	s2.pop();
	s2.pop();
	s2.pop();
	s2.pop();
	
}
