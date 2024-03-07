#include <iostream>
#include <string>

using namespace std;

long repeatedString(string s, long n) {
    long count_a = 0;
    for (char c : s) {
        if (c == 'a')
            count_a++;
    }

    long full_repeats = n / s.length();
    count_a *= full_repeats;

    long remaining_chars = n % s.length();
    for (int i = 0; i < remaining_chars; ++i) {
        if (s[i] == 'a')
            count_a++;
    }

    return count_a;
}

int main() {
    string s = "aba";
    long n = 10;

    long result = repeatedString(s, n);
    cout << "Number of 'a's in the first " << n << " characters: " << result << endl;

    return 0;
}
