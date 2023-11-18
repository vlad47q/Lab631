#include <iostream>
#include <iomanip>

using namespace std;

void inputArray(int* arr, int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        cout << "arr[" << i << "] = "; cin >> arr[i];
    }
}

void printArray(int* arr, int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

int amountOfEvenNums(int* arr, int arrLength) {

    int counter = 0;

    for (int i = 0; i < arrLength; i++) {
        if (arr[i] % 2 == 0) {
            counter++;
        }
    }

    return counter;
}


int main() {

    int n;
    cout << "Array size is: "; cin >> n;
    cout << endl;
    int* a = new int[n];

    inputArray(a, n);
    printArray(a, n);
    cout << "Amount of even numbers is: " << amountOfEvenNums(a, n);
}