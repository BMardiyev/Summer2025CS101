#include <iostream>
using namespace std;

int octal2Dec(const int& octalNumber) {
    int decimalNumber = 0;
    int base = 1;
    int octal = octalNumber;

    while (octal > 0) {
        int lastDigit = octal % 10;

        if (lastDigit < 0 || lastDigit > 7) {
            return -1;
        }
        decimalNumber += lastDigit * base;
        base *= 8;
        octal /= 10;
    }

    return decimalNumber;
}

int main() {
    int octalNum;
    cin >> octalNum;

    int decimal = octal2Dec(octalNum);
    if (decimal == -1) {
        cout << "Invalid" << endl;
    } else {
        cout << decimal << endl;
    }




    return 0;
}
