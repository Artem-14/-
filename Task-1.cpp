#include <iostream>

int main() {
	double R, R0, R1, R2, R3;
	std::cout << "R1: ";
	std::cin >> R1;
	std::cout << "R2: ";
	std::cin >> R2;
	std::cout << "R3: ";
	std::cin >> R3;


	R0 = 1 / R1 + 1 / R2 + 1 / R3;
	R = 1 / R0;

	std::cout << "R = " << R;
	return 0;
}
