#include <iostream>
using namespace std;

int main() {
    int maxNumber = 0;
    int inputNumber;

    for (int i = 1; i <= 7; ++i) {
        std::cout << "Enter a number " << i << ": ";
        std::cin >> inputNumber;

        if (inputNumber > maxNumber) {
            maxNumber = inputNumber;
        }
    }

    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}