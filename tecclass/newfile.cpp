#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int> last(26, -1), seen(26);
        stack<int> st;

        for (int i = 0; i < s.size(); ++i) {
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < s.size(); ++i) {
            int c = s[i] - 'a';
            if (!seen[c]) {
                while (!st.empty() && st.top() < c && i < last[st.top()]) {
                    seen[st.top()] = 0;
                    st.pop();
                }
                st.push(c);
                seen[c] = 1;
            }
        }

        string result;
        while (!st.empty()) {
            result += st.top() + 'a';
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    std::string s = "aabcbbca";
    Solution sol;
    std::string result = sol.lastNonEmptyString(s);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
