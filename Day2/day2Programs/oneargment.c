#include <cstdio>
class Plot
{
	int wid;
	int len;
public:
	void set(int w, int l)
	{
		wid = w;
		len = l;
	}
	void get() 
	{
		printf("%d X %d\n", wid, len);
	}
	/*
	Plot()
	{
		printf("Default constructor\n");
		wid = 20;
		len = 30;
		
	}*/
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
};


Plot p1 = 40;
int main()
{
	Plot p2;
	p2 = p1;

	return 0;
}



