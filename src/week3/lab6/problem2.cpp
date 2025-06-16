#include <iostream>
using namespace std;

double prduct(double v1, double v2, double t) {
    return (v2-v1)/t;
}

int main() {
    double v1, v2, t;
    cin>>v1>>v2>>t;
    cout<<prduct(v1,v2,t);


    return 0;
}
