#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    string res;
    int opened = 0;

    for (char c : s) {
        if (c == '(') {
            if (opened > 0) res += c;
            opened++;
        } else {
            opened--;
            if (opened > 0) res += c;
        }
    }

    return res;
}

int main() {
    string s = "(()())(())";
    cout << removeOuterParentheses(s) << endl;

    return 0;
}
