#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
    int x;
    cin >> x;

    int y = x - 1;
    int z = x ^ y;
    if (y > 0 && x + y > z && x + z > y && y + z > x) {
        cout << y << nl;
        return;
    }

    y = (x ^ (x - 1));
    if (y < x) {
        z = x ^ y;
        if (x + y > z && x + z > y && y + z > x) {
            cout << y << nl;
            return;
        }
    }

    cout << -1 << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}