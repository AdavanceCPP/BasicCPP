#include <cstdio>
class Plot
{
	int wid;
	int len;
public:
	void set(int w, int l)
	{
		wid = w;
		len = l;
	}
	void get() 
	{
		printf("%d X %d\n", wid, len);
	}
};


int main()
{
	int fun(50);// int fun = 50
	
	Plot p1;//allocate memory for p1 and then call constructor  p1.Plot();
	Plot p2;
	p1.set(30, 40);
	p2.set(50, 60);
	Plot p3(p2);
	p1.get();
	p2.get();
	p3.get();
	return 0;
}



