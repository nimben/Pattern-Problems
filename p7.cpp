#include <iostream>
using namespace std;

int main() {
    int rows = 5; // number of pyramid rows
    for (int i = 1; i <= rows; i++) {
        // print leading spaces
        for (int k = 0; k < rows - i; k++)
            cout << " ";
        // print stars
        for (int j = 0; j < (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
