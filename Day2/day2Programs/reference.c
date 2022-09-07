#include <stdio.h>


int main()
{
	int x =100;
	int y =200;

	int & refx = x;//
	refx = y;
	printf("%d\n",x);


}
