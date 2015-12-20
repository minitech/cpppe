#include <iostream>
#include <iomanip>
#include <fstream>
#include <array>

template<int w, int h, int n>
static int bestProduct(std::array<int, w * h> const& grid, int x, int y) {
	int b = 0;

	for (int dy = -1; dy <= 1; dy++) {
		int const ly = y + dy * (n - 1);

		if (ly < 0 || ly >= h) {
			continue;
		}

		for (int dx = -1; dx <= 1; dx++) {
			int const lx = x + dx * (n - 1);

			if (lx < 0 || lx >= w || (dx == 0 && dy == 0)) {
				continue;
			}

			int p = 1;

			for (int d = 0; d < n; d++) {
				int const nx = x + dx * d;
				int const ny = y + dy * d;

				p *= grid[ny * w + nx];
			}

			if (p > b) {
				b = p;
			}
		}
	}

	return b;
}

int main() {
	std::array<int, 20 * 20> grid;

	{
		std::ifstream f("input/11-grid.txt");
		std::copy_n(std::istream_iterator<int>(f), grid.size(), grid.begin());
	}

	int b = 0;

	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 20; x++) {
			int p = bestProduct<20, 20, 4>(grid, x, y);

			if (p > b) {
				b = p;
			}
		}
	}

	std::cout << b << std::endl;
}
