#include <iostream>

using namespace std;

void copy_fct() {
	int v1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int v2[10];

	for (auto i = 0; i != 10; i++) {
		v2[i] = v1[i];
	}

	for (auto i = 0; i != 10; i++) {
		cout << "v2[" << i << "] = " << v2[i] << endl;
	}
}

void print() {
	int v[]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// ”ÍˆÍ for •¶
	for (auto x : v) {
		cout << x << endl;
	}

	for (auto x : { 10, 21, 32, 43, 54, 65 }) {
		cout << x << endl;
	}
}

void increment() {
	int v[]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (auto& x : v) {
		x++;
	}

	for (auto x : v) {
		cout << x << endl;
	}
}

int count_x(char* p, char x) {
	if (p == nullptr) return 0;

	int count = 0;
	for (; *p != 0; ++p) {
		if (*p == x) {
			count++;
		}
	}

	return count;
}

int main() {
	copy_fct();
	print();
	increment();

	char c[10]{ 2, 4, 3, 3, 5, 1, 9, 3, 7, 0 };
	cout << count_x(c, 3) << endl;

	return 0;
}