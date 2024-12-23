#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int findLongestSubstring(const string& s, int start, int end, unordered_set<char>& seen) {
    if (end == s.length()) {
        return 0;
    }

    if (seen.find(s[end]) == seen.end()) {
        seen.insert(s[end]);
        return 1 + findLongestSubstring(s, start, end + 1, seen);
    } else {
        seen.clear();
        return max(findLongestSubstring(s, start + 1, start + 1, seen),
                   findLongestSubstring(s, start, end + 1, seen));
    }
}

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    return findLongestSubstring(s, 0, 0, seen);
}

int main() {
    string input = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: "
         << lengthOfLongestSubstring(input) << endl;
    return 0;
}
