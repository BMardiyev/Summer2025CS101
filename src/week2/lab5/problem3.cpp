#include <iostream>
using namespace std;
int main() {
    float n, sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (float i = 1; i<=n; i++) {
        cout<<1<<"/"<<i<<"+";
        sum+=1/i;

    }
    cout<<endl<<"Sum is "<<sum<<endl;
}
