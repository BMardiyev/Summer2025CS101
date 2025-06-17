#include <iostream>
using namespace std;

void addtosum(int x){
    static int sum = 0;
    sum += x;
    cout<<sum<<endl;
}

int main() {
    addtosum(5);
    addtosum(10);
    addtosum(3);


    return 0;
}
