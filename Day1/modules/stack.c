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
