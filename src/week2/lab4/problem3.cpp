#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz";
    else if (n % 3 == 0)
        cout << "Fizz";
    else if (n % 5 == 0)
        cout << "Buzz";
    else
        cout << "Not divisible by 3 or 5";

    return 0;
}