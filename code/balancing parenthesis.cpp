#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isBalanced(const string& s) {
    stack<char> st;
    for (char it : s) {
        if (it == '(' || it == '{' || it == '[') {
            st.push(it);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((it == ')' && top == '(') || 
                (it == '}' && top == '{') || 
                (it == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    fastIO
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (isBalanced(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
