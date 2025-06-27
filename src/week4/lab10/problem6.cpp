#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n,0);
    for (int i = 0; i < vec.size(); i++) {
        cin>>vec[i];
    }
    // for (int i = 0; i < vec.size(); i++) {
    //     cout<<vec[i]<<" ";
    // }
    int min=vec[0];
    int max=vec[0];
    float average=0;
    for (int i = 0; i < vec.size(); i++) {
        average+=vec[i];
        if (vec[i]<min) {
            min=(vec[i]);
        }if (vec[i]>max) {
            max=vec[i];
        }

    }
    cout<<" min is "<<min<<endl;
    cout<<" max is "<<max<<endl;
    cout<<" average is "<<average/vec.size()<<endl;
    return 0;
}
