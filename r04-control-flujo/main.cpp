#include <iostream>
int main(){
	const int N=5;
	int d[N] = {10, 20, 30, 40, 50};

	int suma = 0;
	for (int i = 0; i < N; i++) suma+= d[i]; // 10 + 20 + 30 + 40 + 50 + basura, error de frontera

	int cuantos = 0;
	for (int i = 0; i < N; i++)
		if (d[i] > 25) cuantos++; // 30 + 40 + 50 = 120

	int k=0;
	while (k < N) { std::cout << d[k++] << ' '; } std::cout << '\n'; // 10, 10, 10, 10, 10, ...
}
