#include <stdio.h>

void swapval(int x,int y) //
{
	int temp;
	temp = x;
	x = y;  
	y = temp;
}

void swapAddress(int *x,int *y)
{
	int temp;

	temp = *x; // temp =  (4000)
	*x = *y;// (4000) = (3996)
	*y = temp;//(3996) = temp

}
void swapref(int  &x,int & y) //
{
	int temp;
	printf("Inside call by reference\n");
	temp = x;
	x = y;  
	y = temp;
}
int main()
{
	int x =100;
	int y =200;
//	swapval(x,y);
//	printf("x = %d y = %d\n",x,y);
//	swapAddress(&x,&y);	
	printf("x = %d y = %d\n",x,y);
	swapref(x,y);
	printf("x = %d y = %d\n",x,y);

}
