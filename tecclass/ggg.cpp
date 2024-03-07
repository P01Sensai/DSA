#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
//3rd
using namespace std;

void solution_function() {
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] != -1) 
            mp[nums[i]] += i;
    }

    int maxi = INT_MIN;
    int res = 0;
    for (auto i : mp) {
        if (maxi < i.second) {
            maxi = i.second;
            res = i.first;
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution_function();
    }
    return 0;
}
