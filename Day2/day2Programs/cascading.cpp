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
	explicit Plot(int w)
	{
		printf("One arg constructor\n");
		wid = w;
		len = 30;
	}

	Plot operator+( Plot rho)
	{
		Plot temp;

		temp.wid =    this->wid+rho.wid;
		temp.len = this->len +rho.len;

		return temp;
	}
};



	Plot p1;
int main()
{
	Plot p2;
	Plot p3;
	Plot p4;


	p4 = p1+p2+p3;//temp+p3

	p1.get();
	p2.get();
	p3.get();
	p4.get();
	return 0;
}



