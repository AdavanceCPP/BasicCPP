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
		w = 20;
		l = 30;
		
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
};


	Plot p1;
int main()
{
	Plot p2(40);
	Plot p3(40,60);
	p1.get();
	p2.get();
	p3.get();
	return 0;
}



