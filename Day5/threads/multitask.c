#include <stdio.h>
int w=100;
void read()
{	
	int i;
	for(i=0;i<10;i++)
	{	
		w++;
		printf("Child: My pid is %d : parent id:%d \n",getpid(),getppid());
		printf("Taking input from the user\n");
		printf("W = %d\n",w);
		sleep(2);
	}
}
void write()
{
	int i;
	printf("Parent process\n");
//	exit(1);
	for(i=0;i<10;i++)
	{
		printf("Parent:My pid is %d: parent id is %d\n",getpid(),getppid());
		printf("Display the output on monitor\n");
		printf("W = %d\n",w);
		sleep(2);
	}
}
int main()
{
	int p;

	p = fork();

	if(p==0)
	{
		read();//child process
	}
	else if(p>0)
	{
		write();// parent process
	}

	return 0;
}
