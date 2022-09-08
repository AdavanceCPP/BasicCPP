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
	void display()
	{
		cout <<"Display by Tata" <<endl;
	}
};
class Nexon: virtual public Tata 
{
	public:
	void engine()
	{
		cout <<"Nexon Engine" <<endl;
	}
	void display()
	{
		cout <<"Nexon Display " <<endl;
	}
};
class Harrier: virtual public Tata 
{
	public:
	void engine()
	{
		cout <<"Harrier Engine" <<endl;
	}
	void display()
	{
		cout <<"Harrier display " <<endl;
	}
};

class NexHar: public Nexon, public Harrier
{
	public:
	void engine()
	{
		cout <<"NexHar Engine" <<endl;
		cout <<"NexHar display " <<endl;
	}
	/*
	void display()
	{
		cout <<"NexHar display " <<endl;
	}
*/	
};

int main()
{
	NexHar nh;

//	nh.display();
	nh.Tata::display();
	nh.Nexon::display();
	nh.Harrier::display();
	nh.engine();
}

