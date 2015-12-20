#include <iostream>
#include <vector>

int main() {
	std::vector<int> primes;

	for (int i = 2; primes.size() < 10001; i++) {
		bool isPrime = true;

		for (int p : primes) {
			if (i % p == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			primes.push_back(i);
		}
	}

	std::cout << primes.back() << std::endl;
}
