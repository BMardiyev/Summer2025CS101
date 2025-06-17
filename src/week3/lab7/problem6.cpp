#include <iostream>
using namespace std;

void reversedigits(int &x) {
    static int reverse=0;
    while (x>0) {
        reverse=reverse*10+(x%10);
        x=x/10;

    }
    cout<<reverse<<endl;
}
int main() {
    int x=123;
    reversedigits(x);



    return 0;
}
