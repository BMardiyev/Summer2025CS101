#include <iostream>
using namespace std;

const int SIZE =4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    int sum=0;
    for (int i=0;i<SIZE;++i) {
        sum=0;
        for (int j=0; j<rowSize; j++) {
            sum+=m[j][i];
        }
        cout << "Sum of column " <<i<<":"<<sum<< endl;
    }

}


int main() {

    double array[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
    }
    cout<<endl;




    return 0;
}
