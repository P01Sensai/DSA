#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void reverseArr(int arr[], int n) {
//     int start = 0;
//     int end = n - 1;
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
void reverseArr(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
       
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    const int N = 4;
    int arr1[N] = {1, 2, 3, 4};

    cout << "Original Array: ";

    for (int i = 0; i < N; i++) {
        cout << arr1[i] << " ";
    }
    reverseArr(arr1, N);
    cout << "\nReversed Array: ";
    for (int i = 0; i < N; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
