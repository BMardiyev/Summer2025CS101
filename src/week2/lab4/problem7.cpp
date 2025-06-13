#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    int first = num/100;
    int last = num%10;

    if (first == last)
        cout <<num<<" is a palindrome";
    else
        cout <<num<<" is not a palindrome";

    return 0;
}