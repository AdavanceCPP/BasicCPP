#include <iostream>
using namespace std;
class Tata
{	
	int gears;
	int seats;

	public:
virtual	void engine()
	{
		cout <<"Tata Engine" <<endl;
	}
	Tata()
	{
		cout <<"Constructor of Tata" <<endl;
	}
virtual	~Tata()
	{
		cout <<"Destructor of Tata" <<endl;
	}
};
class Nexon: public Tata 
{
	public:
	void engine()
	{
		cout <<"Nexon Engine" <<endl;
	}
	Nexon()
	{
		cout <<"Constructor of Nexon" <<endl;
	}
	~Nexon()
	{
		cout <<"Destructor of Nexon" <<endl;
	}
};
class Harrier: public Tata 
{
	public:
	void engine()
	{
		cout <<"Harrier Engine" <<endl;
	}
	Harrier()
	{
		cout <<"Constructor of Harrier" <<endl;
	}
	~Harrier()
	{
		cout <<"Destructor of Harrier" <<endl;
	}
};

void buy(Plot *p)
{
	p = new Nexon;
	p = new Harrier;
}

int main()
{

	buy();


}

