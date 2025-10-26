#include <iostream>
using namespace std;

int main() {
    int a[10][10], transpose[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            transpose[j][i] = a[i][j];

    cout << "Transpose matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}
