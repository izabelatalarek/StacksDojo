#include <iostream>
#include "Stack.h"

int main() {
	int size;

	std::cout << "Enter stack size: ";
	std::cin >> size;

	Stack stos(size);
	stos.menu(size);

	return 0;
}