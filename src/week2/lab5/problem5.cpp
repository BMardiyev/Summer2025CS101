#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int r;
    int sum=0;
    while (x>0) {
        r=x%10;
        sum+=r;
        x=x/10;
    }
    cout<<sum << endl;
}
