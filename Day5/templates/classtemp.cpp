#include <iostream>
using namespace std;
template <class T>

struct STACK
{
private:
	T stack[3];
	int sp;
public:
STACK()
{
	sp = 0;
}

void push(T item)
{
	if(sp==3)
	{
		cout << "stack full\n";
		return;
	}
	stack[sp] = item;
	sp++;
}
void pop()
{
	if(sp==0)
	{
		cout << "Stack empty\n";
		return;
	}
	--sp;
	cout << stack[sp] <<endl;//
}

};

int main()
{
	
STACK <double> s2;
STACK <int> s1;

	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	s2.push(10);
	s2.push(20.5);
	s2.push(30.5);
	s2.push(40.6);
	s2.pop();
	s2.pop();
	s2.pop();
	s2.pop();
}

