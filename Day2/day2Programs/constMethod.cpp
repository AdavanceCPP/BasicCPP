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
	void get() const
	{
		wid++;
		len++;
		printf("%d X %d\n", wid, len);
	}
};


int main()
{
	Plot p1, p2;
	p1.set(30, 40);
	p2.set(50, 60);
	p1.get();
	p2.get();
	return 0;
}



