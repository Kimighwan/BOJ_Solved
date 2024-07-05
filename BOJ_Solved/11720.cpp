#include <iostream>
using namespace std;

int main() {
	string s;
	int num, result = 0;
	cin >> num;
	cin >> s;
	for (int i = 0; i < num; i++)
	{
		result += s[i] -'0';
	}
	cout << result;
}
