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
friend ostream &operator<<(ostream &out, const Plot &p);
	Plot(int w=20, int l=30)
	{
		wid = w;
		len = l;
	}
};
ostream & operator<<(ostream &out, const Plot &p)
{
	out <<p.wid <<"X" <<p.len <<endl;
	return out;
}
int main()
{
	Plot p1;
	Plot p2(50,80);

	cout << p1 << p2 <<endl;
//	operator<<(cout,p1) << p2 << endl;
// out << p2 <<endl;
//operator<<(cout,p2) <<endl
//out << endl;
//operator<<(cout,endl)

	//cout << p2 <<endl;
}



