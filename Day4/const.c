#include <stdio.h>
int main()
{
	const int x = 10;
	long w;
	int y=50;
	int *pc;
	char array[]="Hello";
	char *p;
	printf("Hello");
	p = array;
	//pc = (int *)&x;
	pc = const_cast<int *>(&x);

	int *iopo;

	iopo = reinterpret_cast <int *>(1000);
	//int *   = int

//	w = &y; //&int

	w = reinterpret_cast <long>(&y);
	return 0;
}



