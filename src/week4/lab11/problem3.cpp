
#include <iostream>
using namespace std;

int evenCount( int* a, int size) {
    int counter = 0;
    for (int i=0; i<size; i++) {
        if (*a % 2 == 0) {
            counter++;
        }
        a++;
    }
    return counter;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    int *ptr=a;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<evenCount(ptr,n)<<endl;

    return 0;
}
