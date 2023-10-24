#include <bits/stdc++.h>
using namespace std;

int countPairsWithDifference(vector<int>& nums, int k) {
    unordered_set<int> seen;
    unordered_set<int> uniquePairs;

    for (int num : nums) {
        if (seen.find(num - k) != seen.end()) {
            uniquePairs.insert(num - k);
        }
        if (seen.find(num + k) != seen.end()) {
            uniquePairs.insert(num);
        }
        seen.insert(num);
    }

    return uniquePairs.size();
}

int main() {
    vector<int> nums{3, 1, 4, 1, 5};
    int k = 2;
    int numOfUniquePairs = countPairsWithDifference(nums, k);
    cout << "Number of unique pairs with difference " << k << ": " << numOfUniquePairs << endl;
    return 0;
}
