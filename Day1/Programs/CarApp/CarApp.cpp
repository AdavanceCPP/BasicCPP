#include <cstdio>
#include <cstdlib>
class Car
{
	int vno;
	int gears;
	int doors;
	int currentGear;
	double speed;
	int state;
public:
	void startEngine()
	{
		state = 1;
	}
	void stopEngine()
	{
		state = 0;
	}
	void getCarState()
	{	
		if (state == 0)
		{
			printf("Car is stopped\n");
		}
		if (state == 1)
		{
			printf("Car Engine is  On\n");
		}
	}
	void changeGear()
	{
	}
};

Car c1;
Car c2; 
Car c[5];// c is array of objects , c[0], c[1],..c[4] are objects
int main()
{
	Car c3;
	Car * c4;

	printf("%d\n", sizeof(c1));
	printf("%d\n", sizeof(c4));

	c1.getCarState();
	c2.startEngine();
	c2.getCarState();
	c4 = (Car *)malloc(sizeof(Car));
	c4->getCarState();
	
}