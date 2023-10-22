#include <iostream>
using namespace std;

int main() {
    int number;

    std::cout << "Enter a four-digit number: ";
    std::cin >> number;

    if (number >= 1000 && number <= 9999) {
        int thousands = number / 1000;
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int ones = number % 10;

        int swappedNumber = hundreds * 1000 + thousands * 100 + ones * 10 + tens;

        cout << "Number after exchange: " << swappedNumber << endl;
    }
    else {
        cout << "Error: The entered number is not a four-digit number." << endl;
    }

    return 0;
}