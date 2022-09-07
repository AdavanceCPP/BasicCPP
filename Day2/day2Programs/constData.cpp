#include <cstdio>
class Plot
{
	 int wid;
	 int len;
	 const int pinCode = 243235;
	mutable int cityCode = 112;
public:
	void set(int w, int l)
	{
		wid = w;
		len = l;
	}
	void get() const
	{
		cityCode++;
		printf("%d X %d\n", wid, len);
		printf("CityCode = %d\n",cityCode);
	}
};
int main()
{
	Plot p1, p2;
	printf("%d\n",sizeof(Plot));
	p1.set(30, 40);
	p2.set(50, 60);
	p1.get();
	p2.get();
	return 0;
}



