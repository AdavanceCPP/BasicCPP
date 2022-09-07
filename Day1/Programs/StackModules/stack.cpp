#include <cstdio>
#include "stack.h"
#define SIZE 3

void STACK::push(int item)
{
	if (sp == SIZE)
	{
		printf("stack full\n");
		return;
	}
	stack[sp++] = item;

}
void STACK::pop()
{
	if (sp == 0)
	{
		printf("stack Empty\n");
		return;
	}
	printf("%d\n", stack[--sp]);
}