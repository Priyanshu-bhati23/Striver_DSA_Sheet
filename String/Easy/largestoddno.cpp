/*
Question:
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
A substring is a contiguous sequence of characters within a string.

Approach:
1. Iterate through the string from the last character.
2. Check if the current character is odd.
3. If it is odd, return the substring from the beginning of the string to the current character index.
4. If no odd number is found, return an empty string.

Time Complexity: O(N), where N is the length of the input string num.
- We iterate through the string once to find the largest odd number.

Space Complexity: O(1)
- We use constant space to store the result and iterate through the string.

Code:
*/



#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string num) {
    // Start from the last character
    for (int i = num.size() - 1; i >= 0; i--) {
        // Check if the character is odd (1, 3, 5, 7, 9)
        if ((num[i] - '0') % 2 == 1) {
            return num.substr(0, i + 1);
        }
    }
    return ""; // No odd digit found
}


int main() {
    string num = "4206"; // Example input
    cout << "Largest odd number substring: " << largestOddNumber(num) << endl;

    num = "354276880"; // Another example
    cout << "Largest odd number substring: " << largestOddNumber(num) << endl;

    return 0;
}
