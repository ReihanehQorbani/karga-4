#include <iostream>
using namespace std;
int main() {

	int a, b, max;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b : ";
	cin >> b;

	if (a > b) max = a;
	else max = b;

	while (true) {

		if (max % a == 0 && max % b == 0) break;
		else ++max;
	}

	cout << "LCM(a,b)=" << max;
	system("pause>n");
	return 0;
}