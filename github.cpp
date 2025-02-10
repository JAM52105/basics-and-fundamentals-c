#include <iostream>

using namespace std;

void inputArray(int arr[], int &size, const string &name) {
    cout << "Enter the number of elements for " << name << " (up to 10): ";
    cin >> size;
    if (size > 10) size = 10;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[], int &mergedSize) {
    mergedSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
}