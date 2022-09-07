#include <cstdio>
class Plot
{
	int wid;
	int len;
	friend Plot operator+( Plot lho, Plot rho);
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

	Plot operator+( Plot lho, Plot rho)
	{
		Plot temp;
		temp.wid = lho.wid+rho.wid;
		temp.len = lho.len +rho.len;
		return temp;
	}


	Plot p1;
int main()
{
	Plot p2(40,60);
	Plot p3;
	p3 = p1 + p2;// p1.operator+(p2)
				 //operator+(p1,p2)

	p1.get();
	p2.get();
	p3.get();
	return 0;
}



