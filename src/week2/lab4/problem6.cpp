#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch>='a'&&ch<='z')
        cout << "Lowercase alphabet";
    else if (ch>='A'&&ch<='Z')
        cout <<"Uppercase alphabet";
    else
        cout <<"It is not an alphabet";

    return 0;
}