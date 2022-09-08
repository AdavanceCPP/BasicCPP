#include <iostream>
using namespace std;
class Tata
{	
	int gears;
	int seats;

	public:
	void engine(int type)
	{
		cout <<"Tata Engine with int type" <<endl;
	}
	virtual void engine()
	{
		cout <<"Tata Engine" <<endl;
	}
};
class Nexon: public Tata 
{
	public:
	void engine() override
	{
		cout <<"Nexon Engine" <<endl;
	}
};


int main()
{
	Tata *p;
	p = new Nexon;
	p->engine();

}

