#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> vec(n,0);
    // vec.erase(vec.begin)();
    for(int i=0;i<vec.size();i++) {
        cin>>vec[i];
    }
    for(int i=0;i<vec.size();i++) {
        if(vec[i]<=0) {
            vec.erase(vec.begin()+i);
            i--;
        }
    }
    for(int i=0;i<vec.size();i++) {
        cout<<vec[i]<<" ";
    }



    return 0;
}
