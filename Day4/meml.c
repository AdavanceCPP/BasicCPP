#include <iostream>
#include <cstdlib>
using namespace std;

class Plot
{
	int *wid;
	int *len;
public:
	void get() 
	{
		cout << *wid << "X" << *len <<endl;
	}
	Plot()
	{
		cout << "Default constructor" << endl;
		wid = new int;
		len = new int;
		*wid = 20;
		*len = 30;
		
	}
	Plot(int w, int l)
	{
		cout << "Two arg constructor" << endl;
		wid = new int;
		len = new int;
		*wid = w;
		*len = l;
	}
	Plot(int w)
	{
		cout << "One arg constructor" << endl;
		wid = new int;
		len = new int;
		*wid = w;
		*len = 30;
	}
	~Plot()
	{
		
		cout << "Destructor " << endl;
		delete wid;
		delete len;
	}
};

void fun()
{
	Plot p1;
	Plot p2(40,50);
	p1.get();
	p2.get();
}
int main()
{
	fun();
	while(1);
	return 0;
}



