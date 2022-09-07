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
	Plot()
	{
		printf("Default constructor\n");
		
	}
};


	Plot p1;
int main()
{
	Plot p2;
	p1.get();
	p2.get();
	return 0;
}



