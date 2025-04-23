#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n), r(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    set<pair<int, int>> points;

    for (int i = 0; i < n; i++) {
        int xi = x[i], ri = r[i];

        for (int y = -ri; y <= ri; y++) {
            int max_x_diff = sqrt(ri * ri - y * y);
            int x_start = xi - max_x_diff;
            int x_end = xi + max_x_diff;

            for (int x_val = x_start; x_val <= x_end; x_val++) {
                points.insert({x_val, y});
            }
        }
    }

    cout << points.size() << nl;
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