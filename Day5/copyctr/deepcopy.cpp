#include <stdio.h>
#include <malloc.h>

class Plot 
{
private:
	int *wid;
	int *len;

public:
	 Plot()//overriding default constructor
	{
		printf("Default constructor\n");
		wid = new int;
		*wid = 20;
		len = new int;
		*len = 30;
	}
	
	Plot(int w)//overloading with parameterized constructors
	{
		printf("One arg constructor\n");
		wid = new int;
		*wid = w;
		len = new int;
		*len = 30;
	}
	Plot(int w,int l)
	{
		printf("Two arg constructor\n");
		wid = new int;
		*wid = w;
		len = new int;
		*len = l;
	}
	/*
	Plot (const Plot & p)
	{
		printf("Copy constructor\n");
		wid = new int;
		*wid = *p.wid;
		len = new int;
		*len = *p.len;
		
	}
	*/
	void get()
	{
		printf("%dX%d\n",*wid,*len);
	}
	~Plot()
	{
		printf("Destructor\n");
		delete wid;
		delete len;
	}
	void set(int w,int l)
	{
		*wid = w;
		*len = l;
	}

};
void fun()
{
	Plot p3(50,60);
	Plot p4(p3);
	p3.get();
	p4.get();
	p4.set(80,80);
	p3.get();
	p4.get();


}

int main()
{
	fun();

	return 0;
}
