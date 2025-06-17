#include <iostream>
using namespace std;
void power_two(int &x) {
    x=x*x;
}
int main() {

    int x=5;
    power_two(x);
    cout<<x<<endl;

    return 0;
}
