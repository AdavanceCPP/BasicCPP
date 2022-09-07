#include <iostream>

int main()
{
	int num1;
	int num2;
	
	std::cout << "enter two numbers\n";
	//cout.operator<<("enter two numbers\n");
	//operator<<(cout,"enter two numbers\n");

	std::cin >> num1 >> num2;

	std::cout << num1+num2 << "\n";
}
