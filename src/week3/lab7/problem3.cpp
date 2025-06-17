#include <iostream>
using namespace std;

void updatemax(int x){
    static int max = INT_MIN;
    if(x > max) {
        max = x;
    }
    cout << max << endl;
}

int main() {

    updatemax(5);
    updatemax(10);
    updatemax(3);



    return 0;
}
