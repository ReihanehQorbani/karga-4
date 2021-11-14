#include<iostream>
using namespace std;
int main()
{
	int n, fact = 1;
	bool flag = false;
	cout << "please enter a number: ";

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		if (fact == n) {
			flag = true;
			break;
		}
			
	}
	if (flag)
		cout << "\nYES\n";
	else cout << "\nNO\n";
	
	system("pause>n");
	return 0;
}