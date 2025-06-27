#include <iostream>
using namespace std;

template<typename T>

void compareV(T a, T b) {
    if (a>b) {
        cout<<a<<" is the greatest" <<endl;
    }else if (a<b) {
        cout<<b<<" is the greatest"<<endl;
    }else {
        cout<<"Values are equal"<<endl;
    }
}

template<typename T>
    void middle(T a, T b, T c) {
    if ((a>b && b>c) ||( c>b && b>a)) {
        cout<<b<<" is the middlle"<<endl;
    }else if ((b>a && a>c)  || (c>a && a>b)) {
        cout<<a<<" is the middle"<<endl;
    }else {
        cout<<c<<" is the middle"<<endl;
    }
}

template<typename T>
    T average(T a, T b) {
    return (a+b)/2;
}
int main() {
    compareV(1, 2);
    middle(1, 4, 3);
    cout<<average(2.0,5.0);

    return 0;
}
