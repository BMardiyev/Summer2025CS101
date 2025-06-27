#include <iostream>

using namespace std;

string digitToWord(int digit) {
    if (digit == 0) return "zero";
    if (digit == 1) return "one";
    if (digit == 2) return "two";
    if (digit == 3) return "three";
    if (digit == 4) return "four";
    if (digit == 5) return "five";
    if (digit == 6) return "six";
    if (digit == 7) return "seven";
    if (digit == 8) return "eight";
    if (digit == 9) return "nine";
    return "";
}
void numberToWords(int number) {
    string result = "";

    if (number == 0) {
        cout << digitToWord(0) << endl;
        return;
    }

    int temp = number;
    int power = 1;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    while (power > 0) {
        int digit = number / power;
        cout << digitToWord(digit);
        number %= power;
        power /= 10;
        if (power > 0) cout << " ";
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;
    numberToWords(n);
    return 0;
}

