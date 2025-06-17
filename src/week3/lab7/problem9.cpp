#include <iostream>
using namespace std;

int print_numbers(int n) {
    if(n==0) {
        return 0;
    }
    cout << n << " ";
    return print_numbers(n-1);
}
int main() {
    print_numbers(11);


    return 0;
}