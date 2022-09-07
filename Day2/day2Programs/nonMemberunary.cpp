#include <cstdio>
class Plot
{
	int wid;
	int len;
	friend Plot operator++( Plot p);
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

};

	Plot operator++( Plot & p)
	{
		Plot temp;
		temp.wid = ++p.wid;
		temp.len = ++p.len;
		return temp;
	}


	Plot p1;
int main()
{
	Plot p2;
	p2 = ++p1;//operator++(p1)


	p1.get();
	p2.get();
	return 0;
}



