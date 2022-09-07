#include <cstdio>
class Plot
{
	int wid;
	int len;
public:
	void get() //void get(Plot *this)
	{
		printf("%u\n",this);
		printf("%d X %d\n", this->wid, this->len);
	}
	Plot()//Plot (Plot *this)
	{
		printf("Default constructor\n");
		wid = 20;
		len = 30;
		
	}
	Plot(int wid, const int len)//Plot (Plot *this, int w, int l)
	{
		
		printf("Two arg constructor\n");
		this->wid = wid;
		this->len = len;
	}
	Plot(int w)
	{
		printf("One arg constructor\n");
		wid = w;
		len = 30;
	}
};


Plot p1;//p1.Plot(&p1)
	Plot p3(40,60);//p3.Plot(&p3,40,60)
int main()
{
	Plot p2(40);//p2.Plot(&p2,40)

	printf("%u\n",&p1);
	p1.get();//p1.get(&p1)
	printf("%u\n",&p2);
	p2.get();//p2.get(&p2)
	printf("%u\n",&p3);
	p3.get();//p3.get(&p3)
	return 0;
}



