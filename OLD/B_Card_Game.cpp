#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

int f(int a, int b) {
    if (a > b) return 1;
    if (a == b) return 0;
    return -1;
}


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);
int t;
cin>>t;
while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int ans = 0;

        if (f(a, c) + f(b, d) > 0) ans += 1;
        if (f(a, d) + f(b, c) > 0) ans += 1;
        if (f(b, c) + f(a, d) > 0) ans += 1;
        if (f(b, d) + f(a, c) > 0) ans += 1;

        cout << ans << nl;
    }




return 0;
}