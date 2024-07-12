#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();

string s;
    cin >> s;

    stack<char> sk;

    for (char c : s) {
        if (c == '(') {
            sk.push(c);
        } else {
            if (sk.empty() || sk.top() != '(') {
                cout << "No" << endl;
                return 0;
            }
            sk.pop();
        }
    }

    if (sk.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }



return 0;
}