#include <iostream>
using namespace std;

void fun(double r) {
    cout<<"Circumference is "<<2*3.14*r <<endl;
    cout<<"Area is "<<3.14*r*r<<endl;
}

int main() {
    double r;
    cin>>r;
    fun(r);




    return 0;
}
