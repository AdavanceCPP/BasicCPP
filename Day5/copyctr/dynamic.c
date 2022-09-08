#include <stdio.h>
#include <malloc.h>

class Plot 
{
private:
	int wid;
	int len;

public:
	 Plot()//overriding default constructor
	{
		printf("Default constructor\n");
		wid = 20;
		len = 30;
	}
	
	Plot(int w)//overloading with parameterized constructors
	{
		printf("One arg constructor\n");
		wid = w;
		len = 30;
	}
	Plot(int w,int l)
	{
		printf("Two arg constructor\n");
		wid = w;
		len = l;
	}
	void get()
	{
		printf("%dX%d\n",wid,len);
	}
	~Plot()
	{
		printf("Destructor\n");
	}
	Plot(const Plot &p)
	{
		printf("copy constructor\n");
		wid = p.wid;
		len = p.len;
		
	}






};

int main()
{
	Plot p1(40,60);
	Plot p2(p1);
	p1.get();
	p2.get();

	return 0;
}
