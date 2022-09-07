#include <iostream>
#include <cstdlib>
using namespace std;

class Plot
{
	int wid;
	int len;
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

class House : public Plot
{
	int floors;
	int rooms;
	public:
	House():Plot(50)
	{
		cout << "Default House constructor" << endl;
		floors = 1;
		rooms = 2;
	}
	House(int f)
	{
		cout << "One arg House constructor" << endl;
		floors = f;
		rooms = 2;
	}
	House(int f,int r)
	{
		cout << "Two arg House constructor" << endl;
		floors = f;
		rooms = r;
	}

};
int main()
{
	House h1;

	return 0;
}



