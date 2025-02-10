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
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    cout << "Sorted merged array (descending order): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    char repeat;
    do {
        int arr1[10], arr2[10], merged[20];
        int size1, size2, mergedSize;
        
        inputArray(arr1, size1, "Array 1");
        inputArray(arr2, size2, "Array 2");
        
        mergeArrays(arr1, size1, arr2, size2, merged, mergedSize);
        sortDescending(merged, mergedSize);
        displayArray(merged, mergedSize);
        
        cout << "Do you want to repeat the process? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    
    return 0;
}