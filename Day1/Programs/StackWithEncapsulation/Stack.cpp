#include <cstdio>
#define SIZE 3
struct STACK
{
private:
	int stack[3];
	int sp;
public:
	void push(int item)
	{
		if (sp == SIZE)
		{
			printf("stack full\n");
			return;
		}
		stack[sp++] = item;

	}
	void pop()
	{
		if (sp == 0)
		{
			printf("stack Empty\n");
			return;
		}
		printf("%d\n", stack[--sp]);
	}

};
STACK s1;// s1 is structure variable

int main()
{
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.pop();
	//s1.sp = 5;
	s1.pop();
	s1.pop();
	s1.pop();
	
}
