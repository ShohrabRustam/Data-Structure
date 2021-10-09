#include <iostream>
using namespace std;

int main() {
    int *p[2];
    p[0] = new int[3];
    p[1] = new int[3];
    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array in dynamic allocation
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> p[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements in synamic allocati
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << p[i][j] << endl;
        }
    }

    return 0;
}