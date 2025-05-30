/*
Question:
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Approach:
1. Sort the array of strings lexicographically.
2. Take the first and last string from the sorted array.
3. Compare each character of the first and last string until they don't match or the end of either string is reached.
4. Return the common prefix.

Time Complexity: O(N*M*log(N)), where N is the number of strings and M is the maximum length of the strings.
- Sorting the array of strings takes O(N*log(N)) time.
- Comparing the first and last string takes O(M) time.

Space Complexity: O(1)
- We use constant space.

Code:
*/
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
        return "";

    // Step 1: Sort the array lexicographically
    sort(strs.begin(), strs.end());

    // Step 2: Compare the first and last strings
    string first = strs.front();
    string last = strs.back();
    int i = 0;

    // Step 3: Find common prefix
    while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }

    // Step 4: Return the common prefix
    return first.substr(0, i);
}

int main() {
    vector<string> strs = {"flight", "flow", "flower"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
