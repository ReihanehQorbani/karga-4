#include<iostream>
using namespace std;
int main() {

	int n, m;
	cout << "please enter n: ";
	cin >> n;
	cout << "please enter m: ";
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
				cout << "#";
			else
				cout << "*";
		}
		cout << endl;
	}

	system("pause>n");
	return 0;
}