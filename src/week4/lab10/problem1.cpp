#include <iostream>
using namespace std;
int find_elemet(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element ) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin>>array[i];

    }
    int a;
    cin>>a;
    cout<<find_elemet(array,n,a);


    return 0;
}
