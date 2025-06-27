#include <iostream>
using namespace std;

int maximum(int a, int b, int c){
    if(a>b && a>c) {
        return a;
    }else if (b>a && b>c) {
        return b;
    }else {
        return c;
    }
}
int minimum(int a, int b, int c) {
    if(a<b && a<c) {
        return a;
    }else if (b<a && b<c) {
        return b;
    }  else {
        return c;
    }
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maximum(a,b,c)<<endl;
    cout<<minimum(a,b,c)<<endl;



    return 0;
}
