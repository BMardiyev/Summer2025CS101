#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int even = 0, odd = 0;
    for (int i=0; i<4; i++) {
        int digit = num % 10;
        if (digit%2==0)
            even++;
        else
            odd++;
        num /= 10;
    }

    if (even > odd)
        cout << "More even digits";
    else if (odd > even)
        cout << "More odd digits";
    else
        cout << "Equal even and odd digits";

    return 0;
}