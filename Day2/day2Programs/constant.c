#include <stdio.h>


int main()
{
	char comp[] = "volvo";
	char str[] = "bengaluru";
	char *p = "hello";
//	p[0]='H';
//	printf("%c\n",p[0]);

	char * p1 = comp;
	printf("%s\n",p1);
	p1[0] ='V';
	printf("%c\n",p1[0]);
	printf("%s\n",p1);

	const char *p2 = comp;

	printf("%s\n",p2);
	p2 = str;
	printf("%s\n",p2);
	char * const p3; 
	
	return 0;
}
