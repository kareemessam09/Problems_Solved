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

    while(t--) {
        string s;
        cin >> s;

        int cuts = 1;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '1' && s[i+1] == '0') {
                cuts++;
            }
        }

        cout << cuts << "\n";
    }

return 0;
}