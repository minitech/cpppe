#include <iostream>

static int gcd(int a, int b) {
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}

	return a;
}

static int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

int main() {
	int result = 1;

	for (int i = 1; i <= 20; i++) {
		result = lcm(result, i);
	}

	std::cout << result << std::endl;
}
