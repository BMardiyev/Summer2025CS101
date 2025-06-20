#include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++)
        if (array[i] >= array[index])
            index = i;
    return index;
}

int main() {
    const int SIZE = 15;
    double arr[SIZE];
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];
    cout << "Index of largest element: " << indexOfLargestElement(arr, SIZE) << endl;
    return 0;
}