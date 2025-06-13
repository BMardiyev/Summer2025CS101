#include <iostream>
using namespace std;
int main() {
    int num=50;
    for(int i=1;i<=num;i++) {
        if(i%3==0||i%5==0) {
            continue;
        }cout<<i<<" ";
    }
}