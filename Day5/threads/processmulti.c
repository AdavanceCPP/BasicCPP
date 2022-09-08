#include<stdio.h>

void read()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Read operation\n");
		sleep(2);
	}
}
void write()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Write operation\n");
		sleep(2);
	}
}

int main()
{
	int pid;
	pid = fork();
	if(pid ==0)
	{
		read();
	}
	else
	{
		write();	
	}

}
