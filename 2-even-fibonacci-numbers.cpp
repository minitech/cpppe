#include <iostream>

int main() {
	int a = 1;
	int b = 2;
	int sum = 0;

	while (a < 4000000) {
		if (a % 2 == 0) {
			sum += a;
		}

		int t = a;
		a = b;
		b += t;
	}

	std::cout << sum << std::endl;

	return 0;
}
