#include <iostream>

int64_t largestPrimeFactor(int64_t n) {
	for (int64_t f = 2; f < n;) {
		if (n % f == 0) {
			n /= f;
		} else {
			f++;
		}
	}

	return n;
}

int main() {
	std::cout << largestPrimeFactor(600851475143) << std::endl;
}
