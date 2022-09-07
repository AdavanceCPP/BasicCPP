#include <iostream>
using namespace std;
class Tata
{	
	int gears;
	int seats;

	public:
	virtual void engine()
	{
		cout <<"Tata Engine" <<endl;
	}
};
class Nexon: public Tata 
{
	public:
	void engine()
	{
		cout <<"Nexon Engine" <<endl;
	}
};
class Harrier: public Tata 
{
	public:
	void engine()
	{
		cout <<"Harrier Engine" <<endl;
	}
};

int main()
{
	Tata *p;    
	Nexon n;
	Harrier h;
	p =&n;
	p->engine();
	
	p =&h;
	p->engine();
}

