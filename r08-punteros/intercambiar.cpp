#include <iostream>

void intercambiar1(int a, int b);
void intercambiar2(int* a, int* b);
void intercambiar3(int& a, int& b);

int main() {
	int x = 1, y = 2;
	intercambiar1(x, y);
	std::cout << x << ' ' << y << '\n';
	intercambiar2(&x, &y);
	std::cout << x << ' ' << y << '\n';
	intercambiar3(x, y);
	std::cout << x << ' ' << y << '\n';
	return 0;
}

void intercambiar1(int a, int b) {
	int x;
	x = a;
	a = b;
	b = x;
}
void intercambiar2(int* a, int* b) {
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
void intercambiar3(int& a, int& b) {
	int x;
	x = a;
	a = b;
	b = x;
}
