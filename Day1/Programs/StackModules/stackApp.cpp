#include "stack.h"

STACK s1;// s1 is structure variable
STACK s2;
int main()
{
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.pop();
	//s1.sp = 5;
	s1.pop();
	s1.pop();
	s1.pop();

	s2.push(85);
	s2.push(78);
	s2.pop();
	s2.pop();

}