#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
		if (i % 10 == 0) cout << '\n';
	}
}