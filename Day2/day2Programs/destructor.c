#include <cstdio>
class Plot
{
	int wid;
	int len;
public:
	void get() 
	{
		printf("%d X %d\n", wid, len);
	}
	Plot()
	{
		printf("Default constructor\n");
		wid = 20;
		len = 30;
		
	}
	Plot(int w, int l)
	{
		printf("Two arg constructor\n");
		wid = w;
		len = l;
	}
	Plot(int w)
	{
		printf("One arg constructor\n");
		wid = w;
		len = 30;
	}

	~Plot()
	{
		printf("Destructor\n");
	}
		
};


void fun()
{
	Plot p;
}
int main()
{
	Plot p2(50);
	printf("INside main\n");
	fun();
	printf("Back to main main\n");

	return 0;
}



