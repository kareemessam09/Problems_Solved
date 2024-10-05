#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)


int main() {
KemOn09();

string s;
cin >> s;
string ans = "";

transform(s.begin(), s.end(), s.begin(), ::tolower);

for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
        continue;
    } else {
        ans += '.';
        ans += s[i];
    }
}
cout << ans << endl;




return 0;
}