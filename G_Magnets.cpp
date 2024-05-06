#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n, k = 1;
cin >> n;
string s1, s2;
cin >> s1;
for (int i = 1; i < n; i++) {
    cin >> s2;
    if (s1[1] == s2[0])
        k++;
    s1 = s2;
}
cout << k;

return 0;
}