#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n / 2);
        for (int i = 0; i < n / 2; ++i) {
            cin >> b[i];
        }

        vector<int> p(n, -1);
        set<int> available;
        for (int i = 1; i <= n; ++i) {
            available.insert(i);
        }

        bool possible = true;
        for (int i = 0; i < n / 2; ++i) {
            int max_val = b[i];
            auto it = available.lower_bound(max_val);
            if (it == available.end() || *it != max_val) {
    possible = false;
                break;
            }
            p[2 * i + 1] = max_val;
            available.erase(it);

            it = available.lower_bound(1);
            if (it == available.end() || *it >= max_val) {
                possible = false;
                break;
            }
            p[2 * i] = *it;
            available.erase(it);
        }

        if (possible) {
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }

}
int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

solve();



return 0;
}