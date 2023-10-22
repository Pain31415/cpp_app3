#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter first numbers: ";
	cin >> num1;
	cout << "Enter second numbers: ";
	cin >> num2;

	if (num1 < num2) {
		cout << "Lesser number: " << num1 << endl;
	}
	else if (num2 < num1) {
		cout << "Lesser number: " << num2 << endl;
	}
	else {
		cout << "The entered numbers are equal." << endl;
	}
	return 0;
}