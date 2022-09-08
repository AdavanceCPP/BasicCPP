#include <stdio.h>

int stack[3];
int sp=0;

void push(int item)
{
	if(sp==3)
	{
		printf("stack full\n");
		return;
	}
	stack[sp] = item;
	sp++;
}
void pop()
{
	if(sp==0)
	{
		printf("Stack empty\n");
		return;
	}
	--sp;
	printf("%d\n",stack[sp]);
}

int main()
{
	
	push(10);
	push(20);
	push(30);
	push(40);
	sp = 23324;
	pop();
	pop();
	pop();
	pop();
}

