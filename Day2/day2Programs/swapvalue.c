#include <stdio.h>

void swap(int x,int  y) //
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}

int main()
{
	int x =100;
	int y =200;
	printf("x = %d y = %d\n",x,y);
	swap(x,y);//swap(100,200)
	printf("x = %d y = %d\n",x,y);

}
