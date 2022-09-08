#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{

	ofstream outfile;
	ifstream infile;
	fstream inout;
	char buf;
	infile.open(argv[1], ios::binary);
	outfile.open(argv[2],ios::binary);
    
	while (infile.read((char *)&buf, 1)) 
		outfile.write((char *)&buf,1); 
 
	cout << "Finished\n"; 
	outfile.close();
	getchar(); 
	return 0; 
}
