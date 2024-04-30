#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
string s;
cin >> s;
int n = s.size();

stack<char> stk;
for (int i = 0; i < n; i++) {
    if (!stk.empty() && stk.top() == s[i]) {
        stk.pop();
    } else {
        stk.push(s[i]);
    }
}

if (stk.empty()) {
    cout << "Yes";
} else {
    cout << "No";
}

return 0;
}