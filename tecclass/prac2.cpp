#include <bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    vector<int> rotatedArr(n);
    for (int i = 0; i < n; ++i) {
       
        int newIndex = (i + d) % n;
        rotatedArr[i] = arr[newIndex];
    }
    return rotatedArr;
}

int main() {
    vector<int> originalArray = {1, 2, 3, 4, 5};
    int rotationSteps = 2;

    vector<int> rotatedArray = leftRotate(originalArray, rotationSteps);

    cout << "Original Array: ";
    for (int num : originalArray) {
        cout << num << " ";
    }

    cout << "\nRotated Array: ";
    for (int num : rotatedArray) {
        cout << num << " ";
    }

    return 0;
}
