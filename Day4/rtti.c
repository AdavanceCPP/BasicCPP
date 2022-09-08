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
{ public:
	void engine()
	{
		cout <<"Harrier Engine" <<endl;
	}
};
void buy(Tata *p)
{
	Nexon *n;
	Harrier *h;

	n =dynamic_cast  <Nexon *>(p);
	if(n!=NULL)
		cout <<"Nexon offers 10% Discount" <<endl;
	h =dynamic_cast  <Harrier *>(p);
	if(h!=NULL)
		cout <<"Harrier offers 5% Discount" <<endl;
		
	
	p->engine();

}

int main()
{
	Tata *p;    
	Nexon n;
	Harrier h;
	int choice;
	cout <<sizeof(n) <<endl;
	cout <<sizeof(h) <<endl;
	cout <<"Enter 1 to buy Nexon: 2 to buty Harrier" <<endl;
	cin >> choice;

	if(choice==1)
		buy(&n);
	else if(choice==2)
		buy(&h);
	else
		cout <<"Invalid option entered" <<endl;







}

