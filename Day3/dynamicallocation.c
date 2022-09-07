#include <iostream>
#include <cstdlib>
using namespace std;

class Plot
{
	int wid;
	int len;
	int citycode;
	int citypincode;
	int num[5];
public:
	void get() 
	{
		cout << wid << "X" << len <<endl;
	}
	Plot()
	{
		cout << "Default constructor" << endl;
		wid = 20;
		len = 30;
		
	}
	Plot(int w, int l)
	{
		cout << "Two arg constructor" << endl;
		wid = w;
		len = l;
	}
	Plot(int w)
	{
		cout << "One arg constructor" << endl;
		wid = w;
		len = 30;
	}
};

void fun()
{
	Plot p1[10];//sub sp,8


			//add sp,8
}
int main()
{
	Plot *p1;
	Plot p3;

	cout << sizeof(p1) <<endl;
	cout << sizeof(p3) <<endl;
	/*
//	fun();
	Plot *p1;
	Plot p3;
	int *p;
	Plot *p2;
	Plot *p1;
	Plot p3;

	p1 = (Plot *)malloc(sizeof(Plot));
	p1->get();

	p2 = new Plot;
	p2->get();

	p1 = new Plot(40);
	p1->get();
	
	p1 = new Plot(40,80);
	p1->get();
*/
	return 0;
}



