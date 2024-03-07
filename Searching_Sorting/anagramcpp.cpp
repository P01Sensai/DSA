#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> mp;

    // Iterate through each string
    for (string str : strs) {
        // Sort the string to obtain its sorted form
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        
        // Add the string to its corresponding group in the hashmap
        mp[sortedStr].push_back(str);
    }

    // Extract the grouped anagrams from the hashmap
    vector<vector<string>> result;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        result.push_back(it->second);
    }

    return result;
}

// Function to check whether two strings are anagrams of each other
bool areAnagram(string str1, string str2) {
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

// Driver code
int main() {
    vector<string> str1 = {"gram", "arm", "ate", "eat"};
    string str2 = "arm";

    if (areAnagram(str1[0], str2))
        cout << "The two strings are anagrams of each other";
    else
        cout << "The two strings are not anagrams of each other";

    return 0;
}
