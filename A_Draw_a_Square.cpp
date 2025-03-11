#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

bool isSquare(int l, int r, int d, int u) {
    return (l == r && d == u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if (isSquare(l, r, d, u)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}