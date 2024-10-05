#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
 int t;
    cin >> t;

while (t--) {
        string s;
        cin >> s;
        string r = s;
        // Sort the characters of the string
        sort(s.begin(), s.end());

        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] != s[i + 1]) {
                swap(s[i], s[i + 1]);
                break;
            }
        }

        if (s == r) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }


return 0;
}