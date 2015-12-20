#include <iostream>
#include <vector>

int main() {
	std::vector<int> primes = {};
	int64_t sum = 2;

	for (int i = 3; i < 2000000; i += 2) {
		bool isPrime = true;

		for (int p : primes) {
			if (i % p == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			sum += i;
			primes.push_back(i);
		}
	}

	std::cout << sum << std::endl;
}
