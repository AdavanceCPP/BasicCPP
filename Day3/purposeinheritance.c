#include <iostream>
#include <cstdlib>
using namespace std;

class Plot
{
	public:
	void fun1()
	{
		cout <<"Existing feature" <<endl;
	}
};

class House : public Plot
{
	public:

};
int main()
{
	House h1;

	h1.fun1();

	return 0;
}



