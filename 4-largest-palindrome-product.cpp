#include <iostream>

static bool isPalindrome(int n) {
	auto s = std::to_string(n);
	return std::equal(s.begin(), s.end(), s.rbegin());
}

int main() {
	int largest = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			int p = i * j;

			if (p > largest && isPalindrome(p)) {
				largest = p;
			}
		}
	}

	std::cout << largest << std::endl;
}
