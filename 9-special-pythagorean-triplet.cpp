#include <iostream>

int main() {
	/*
	 * (math)
	 * b < 500 + k - a
	 * k <= 250
	 */
	for (int a = 1; a < 500; a++) {
		for (int b = a + 1; b <= 750 - a; b++) {
			int const c = 1000 - (a + b);

			if (a * a + b * b == c * c) {
				std::cout << a * b * c << std::endl;
				return 0;
			}
		}
	}
}
