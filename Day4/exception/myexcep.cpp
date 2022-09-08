#include <iostream>
using namespace std;
class myexcep
{
	char *p;
	public:
	myexcep(char *s)// char * s= "out of bound access";
	{
		p = s;
	}
	void geterror()
	{
		cout << p << endl;
	}
};
class operations
{
	int arr[5];

	public:
	operations()
	{
		arr[0] = 10;
		arr[1] = 20;
		arr[2] = 30;
		arr[3] = 40;
		arr[4] = 50;
	}
	int div(int  n, int d)
	{
			int r;
			if(d==0)
			{
				myexcep e("Dividing by zero");
				throw e;
			  //throw 3.5f;

			}
			r = n/d;

			return r;
	}
	void array(int i)
	{
		if(i<0||i>4)
		{
			myexcep e1((char *)"Out of bound access");
			throw e1;
		}
		cout << arr[i] <<endl;	
	}

};
int main()
{
	operations d;
	int i;
	int n1,n2;

	cout << "enter array index value " <<endl;
	cin >>i;

	try
	{
		d.array(i);
	}
	catch(int i)
	{
		cout << "Inside int i catch Block" <<endl;
	}
	catch(double d)
	{
		cout << "Inside double d catch Block" <<endl;
	}
	catch (myexcep m)
	{
		m.geterror();
	}
	cout <<"Enter numerator and denominator for divison" <<endl;
	cin >> 	n1 >>n2;

	try
	{
		d.div(n1,n2);
	}
	catch (myexcep m)
	{
		m.geterror();
	cout <<"Re Enter numerator and denominator for divison" <<endl;
	cin >> 	n1 >>n2;
	}
	cout <<" Inside Main" << endl;
}
