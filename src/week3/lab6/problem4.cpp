#include <iostream>
using namespace std;

void fun(double a, double b) {
    cout<<"Perimetr is "<<(a+b)*2 <<endl;
    cout<<"Area is "<<a*b<<endl;
}

int main() {
    double a, b;
    cin>>a>>b;
    fun(a,b);




    return 0;
}
