#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
string s, t;
cin >> s >> t;

int c = 0;
for (int i = 0; i < t.size(); i++) {
    if (s[c] == t[i]) {
        c++;
    }
}
cout << c + 1;



return 0;
}