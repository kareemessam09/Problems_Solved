#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

int t; 
cin >> t; 

while (t--) {
        ll n, m, r, c; 
        cin >> n >> m >> r >> c;
        cout << (n - r) * (m - 1) + n * m - (r - 1) * m - c << nl;
    }


return 0;
}