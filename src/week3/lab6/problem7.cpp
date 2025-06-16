#include <iostream>
using namespace std;

void Displayeven(int n){
    int reverse=0;
    while(n>0) {
        reverse=reverse*10+n%10;
        n=n/10;
    }
    cout<<reverse<<endl;
    while (reverse>0) {
        int d= reverse%10;
        if(d%2==0) {
            cout<<d<<endl;
        }
        reverse=reverse/10;

    }

}


int main() {
    int n;
    cin>>n;
    Displayeven(n);



    return 0;
}