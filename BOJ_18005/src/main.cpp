#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (2 == n) {
		cout << 1;
		return 0;
	}

	if (1 == n % 2) {
		cout << 0;
		return 0;
	}

	if (0 == (n / 2) % 2) {
		cout << 2;
	}
	else {
		cout << 1;
	}

	return 0;
}