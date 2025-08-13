#include <iostream>
using namespace std;

void input(int arr[], int n) {
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> arr[i];
    }
}
int removeDuplicates(int arr[], int n) {
    int unique[100];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    for (int i = 0; i < uniqueCount; i++) {
        arr[i] = unique[i];
    }
    return uniqueCount;
}

int main() {
    int arr[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    input(arr, n);
    n = removeDuplicates(arr, n); 
    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
