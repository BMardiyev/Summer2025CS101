#include <iostream>
using namespace std;

bool is_mirrored( const int* a, const int* b, int size) {
    for (int i=0; i<size; i++) {
        if (*a != *b) {
            return false;

        }
        a++;
        b--;
    }
    return true;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }
    cout<<is_mirrored(a,&b[n-1],n)<<endl;

    return 0;
}
