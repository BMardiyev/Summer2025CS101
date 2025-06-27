#include <iostream>
using namespace std;
int cubeOfDigits(int num) {
    int sum = 0;
    int n = num;
    while (n > 0) {
        int d = n % 10;
        sum +=d * d * d;
        n /= 10;}


    return sum;
}

bool isArmstrong(int num) {
    return cubeOfDigits(num) == num;
}

int main() {
    int num;
    cin >> num;

    if (isArmstrong(num)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
