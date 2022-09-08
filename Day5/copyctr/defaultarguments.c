#include <iostream>
using namespace std;

class Plot 
{
private:
	int *wid;
	int *len;

public:
	Plot(int w=20,int l=30)
	{
		cout <<"ctors taking two defualt args" <<endl;
		wid = new int;
		*wid = w;
		len = new int;
		*len = l;
	}
	Plot(int w,int l,int z)
	{
		cout <<"ctors taking three  args" <<endl;
		wid = new int;
		*wid = w;
		len = new int;
		*len = l;
	}
	void get()
	{
		cout << *wid <<"X"<< *len<<endl;
	}
	~Plot()
	{
		delete wid;
		delete len;
	}
	void set(int w,int l)
	{
		*wid = w;
		*len = l;
	}

};
Plot p1;
Plot p2(50);
Plot p(50,60);
Plot p5(50,60,60);

void fun()
{
	Plot p3(50,60);
	Plot p4(p3);
	p3.get();
	p4.get();
	cout <<"After modifying p4 " <<endl;
	p4.set(80,80);
	p4.get();
	p3.get();
}

int main()
{
	//fun();
	return 0;
}
