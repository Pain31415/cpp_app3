#include <iostream>
using namespace std;
\
int main()
{
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	if (num1 == num2) {
		cout << "The numbers are equal." << endl;
	}
	else if (num1 < num2) {
		cout << "Numbers in ascending order: " << num1 << ", " << num2 << endl;
	}
	else {
		cout << "Numbers in ascending order: " << num2 << ", " << num1 << endl;
	}
	return 0;
}