#include <iostream>
using namespace std;

#define SIZE 100

void create(int arr[], int &n) {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insert(int arr[], int &n) {
    int pos, val;
    cout << "Enter position (0-" << n << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i >
