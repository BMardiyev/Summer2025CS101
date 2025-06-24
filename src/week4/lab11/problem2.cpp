#include <iostream>
using namespace std;

int main() {
    int a[10] = {};
    int *ptr=a;
    for (int i=0; i<10; i++) {
        cin>>*ptr;
        *ptr=*ptr*0.3;
        ptr++;
    }
    for (int i=0; i<10; i++) {
        cout<<a[i]<<endl;
    }


    return 0;
}

