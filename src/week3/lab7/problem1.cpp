#include <iostream>
using namespace std;

void sayhello() {
    static int count = 0;
    cout << "Hello" <<++count<< endl;

}

int main() {
    sayhello();
    sayhello();


    return 0;
}
