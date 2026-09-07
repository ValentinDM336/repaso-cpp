#include <iostream>
#include <string>

int contarPalabras(const std::string& s) {
	int n = 0; bool dentro = false;
	for (char c : s) {
		if (c == ' ') dentro = false;
		else if (!dentro) {dentro = true; n++; }
	}
	return n;
}

std::string voltear(const std::string& s) {
	std::string r;
	for (std::size_t i = s.size(); i > 0; i--)
		r += s[i - 1];
	return r;
}



int main() {
	std::cout << contarPalabras("hola como estas yo muy bien tu que tal") << '\n';
	std::cout << voltear("scubidu papa y el pum pum pum pum pum") << '\n';
	return 0;
}
