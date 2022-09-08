int main()
{
	printf("%d\n",getpid());
	fork();
	printf("%d\n",getpid());
	printf("Hello\n");
}
