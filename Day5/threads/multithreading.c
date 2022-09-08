#include <stdio.h>
#include <pthread.h>

void task1()
{	
	int i;
	for(i=0;i<10;i++)
	{
		printf("My pid is %d\n",getpid());
		printf("Taking input from the user\n");
		printf("First  thread id is %u\n",pthread_self());
		sleep(1);
	}
	printf("Thread 1 terminated\n");
}
void task2()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("My pid is %d\n",getpid());
		printf("Second  thread id is %u\n",pthread_self());
		printf("Display the oudput on monitor\n");
		sleep(1);
	}
	printf("Thread 2 terminated\n");
}
void task3()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Third  thread id is %u\n",pthread_self());
		printf("My pid is %d\n",getpid());
		printf("Performs autosaving\n");
		sleep(1);
	}
	printf("Thread 3 terminated\n");
}
int main()
{
	int p;
	pthread_t t1;
	pthread_t t2;
	pthread_t t3;
	int i;
	
	printf("THis is main Thread\n");
	
	pthread_create(&t1,NULL,(void *)(void *)task1,NULL);
	pthread_create(&t2,NULL,task2,NULL);
	pthread_create(&t3,NULL,task3,NULL);

	for(i=0;i<10;i++)
	{
		printf("My pid is %d\n",getpid());
		printf("I am Main thread\n");
		printf("Main thread id is %u\n",pthread_self());
		sleep(1);
	}
	pthread_join(t1,NULL); 
	pthread_join(t2,NULL); 
	pthread_join(t3,NULL); 
	return 0;
	}











