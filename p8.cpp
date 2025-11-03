#include <iostream>
using namespace std;

int main() {
    int rows = 5; // number of pyramid rows
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < i;k++)
            cout << " ";
        for (int j = 1; j < (2 * (rows - i )- 1)-1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}