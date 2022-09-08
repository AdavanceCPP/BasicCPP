#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream wfile;// ofstream wfile(argv[1])
	char buf[10];
	int r;
	
	wfile.open(argv[1]);
	if (!wfile)
	{
		cout << "file opening for write failed";
		return 1;
	}
	//wfile.write("hellofromcpp", 11);
	while (1)
	{
	
		wfile.read(buf, 10);
		cout << wfile.gcount() << endl;
		if (wfile.gcount() > 0)
		{
			cout << buf << endl;
		}
		else
		{
			break;
		}

	}
	return 0;

}
