#include<stdio.h>
#include<unistd.h>

void read()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Read operation\n");
		sleep(1);
	}
}
void write()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Write operation\n");
		sleep(1);
	}
}

int main()
{
	read();
	write();
}
