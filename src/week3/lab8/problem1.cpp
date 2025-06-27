#include <iostream>
using namespace std;

int power(int num, int p) {
    if (p==0){
        return 1;
    }
    return num*power(num, p-1);
}

int main() {

    int a, b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;


    return 0;
}
