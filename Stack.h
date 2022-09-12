#pragma once

class Stack
{
	int sizeOfArr;
	int* arr = new int[sizeOfArr];
	int top;
public:
	void size();
	Stack(int nn);
	~Stack();
	bool push(int x);
	bool pop();
	int peek();
	void emptySpace();
	void menu(int x);
	bool testValueInIndex(int index, int value);
};