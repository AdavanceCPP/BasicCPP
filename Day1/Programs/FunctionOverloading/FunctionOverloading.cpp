#include <cstdio>

int add(int x, int y)
{

	return x + y;
}
int add(int x, int y, int z)
{

	return x + y;
}
float add(float x, float y)
{

	return x + y;
}
float add(double x, double y)
{

	return x + y;
}

double add(double x, int y)
{

	return x + y;
}
double add(int x, double y)
{

	return x + y;
}

int main()
{
	printf("%d", add(10, 20));
	printf("%d", add(10, 20, 30));
	printf("%f", add((int)10.5, (int)20.5));//add(double,double)
	printf("%f", add(10.5f, 20.5f));//add(float,float)
	printf("%f", add(10.5, 20.5));//add(double,double)
	printf("%d", add(10.5, 20));
	printf("%d", add(10, 20.5));





	//printf("%d")
}