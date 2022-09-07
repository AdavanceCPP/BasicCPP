#pragma once

struct STACK
{
private:
	int stack[3];
	int sp;
public:
	void push(int item);
	
	void pop();
	
};
