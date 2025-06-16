#include <iostream>
using namespace std;

int factorial( int x=0) {
    int f=1;
    for(int i = 1; i<=x; i++) {
        f=f*i;

    }
    return f;
}

int main() {
    int num;
    cin>>num;
    cout<<factorial(num)<<endl;


    return 0;
}