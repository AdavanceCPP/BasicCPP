
#include <cstdio>
class Plot
{
	int wid;
	int len;
	static int cityCode;

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
	static void getCityCode()
	{
		printf("city code = %d\n", cityCode);
	}
};


int  Plot::cityCode = 912;
int main()
{
	Plot::getCityCode();
	Plot p1, p2;
	printf("Size of Plot = %d\n", sizeof(Plot));
	p1.set(30, 40);
	p2.set(50, 60);
	p1.get();
	p2.get();
	p1.getCityCode();
	return 0;
}



