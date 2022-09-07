#include <stdio.h>
#define SIZE 3

int stack[3];
int sp=0;

void push(int item)
{
	if(sp == SIZE)
	{
		printf("stack full\n");
		return;
	}
	stack[sp++] = item;
		
}
void pop()
{
	if(sp == 0)
	{
		printf("stack Empty\n");
		return;
	}
	printf("%d\n",stack[--sp]);
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	sp =53588;
	pop();
	pop();
	pop();
}
