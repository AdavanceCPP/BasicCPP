#include <iostream>
using namespace std;

int x = 100;

int main()
{
	int x = 200;

	cout << "x = " <<x <<endl;
	cout << "x = " <<::x <<endl;

	return 0;

}
