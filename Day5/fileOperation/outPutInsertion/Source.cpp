#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream wout("InventoryMobile",ios::binary);

	if (!wout)
	{
		cout << "Unable ot open inventory file" << endl;
		return 0;
	}

	wout << "Nokia" << 25 << endl;
	wout << "Iphone" << 15 << endl;
	wout << "Samsung" << 35 << endl;
	
	wout.close();
	return 0;
}
