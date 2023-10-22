#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a six-digit number: ";
    cin >> number;

    if (number >= 100000 && number <= 999999) {
        int firstHalf = number / 1000;
        int secondHalf = number % 1000;

        int sumFirstPart = (firstHalf % 10) + ((firstHalf / 10) % 10) + (firstHalf / 100);
        int sumSecondPart = (secondHalf % 10) + ((secondHalf / 10) % 10) + (secondHalf / 100);

        if (sumFirstPart == sumSecondPart) {
            cout << "This is a lucky number!" << endl;
        }
        else {
            cout << "This is not a lucky number." << endl;
        }
    }
    else {
       cout << "Error: The entered number is not a six-digit number." << endl;
    }

    return 0;
}