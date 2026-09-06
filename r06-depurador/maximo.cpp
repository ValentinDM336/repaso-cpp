#include <iostream>

int maximo(const int  v[], int n) {
	int mejor = v[0];
	for (int i = 0; i < n; i++)
		if (v[i] > mejor)
			mejor = v[i];
	return mejor;
}
