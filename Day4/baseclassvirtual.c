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
class Nexon: public Tata 
{
	public:
	void engine()
	{
		cout <<"Nexon Engine" <<endl;
	}
};
class Harrier:public Tata 
{
	public:
	void engine()
	{
		cout <<"Harrier Engine" <<endl;
	}
};

class NexHar: public Nexon, public Harrier
{
	public:
	void engine()
	{
		cout <<"NexHar Engine" <<endl;
	}
	
};

int main()
{
	NexHar nh;

	nh.Nexon::display();
	nh.engine();
}

