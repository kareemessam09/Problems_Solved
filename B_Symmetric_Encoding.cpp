#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int t;
cin >> t;
while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        string r;
        for (char c : b) {
            if (r.find(c) == string::npos) {
                r += c;
            }
        }
        sort(r.begin(), r.end());

        string s;
        for (char c : b) {
            s += r[r.size() - 1 - r.find(c)];
        }

        cout << s << "\n";
    }



return 0;
}