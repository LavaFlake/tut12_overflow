#include <iostream>

int main() {
	unsigned short x {65535};

	std::cout << "x was:\t\t" << x << std::endl;
	x = x + 1;
	std::cout << "x is now:\t" << x << std::endl;

	return 0;
}
