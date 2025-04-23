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

ll n,m,q;
cin >> n >>m >>q;

ll arr[n+1][m+1];

    for (size_t i = 1; i <= n; i++) {
        for (size_t j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    for (size_t i = 1; i <= n; i++) {
        for (size_t j = 2; j <= m; j++) { 
            arr[i][j] += arr[i][j - 1];
        }
    }

    for (size_t i = 2; i <= n; i++) { 
        for (size_t j = 1; j <= m; j++) {
            arr[i][j] += arr[i - 1][j];
        }
    }

    while (q--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll result = arr[x2][y2] - (x1 > 1 ? arr[x1 - 1][y2] : 0) - (y1 > 1 ? arr[x2][y1 - 1] : 0) + (x1 > 1 && y1 > 1 ? arr[x1 - 1][y1 - 1] : 0);

        cout << result << nl;

    }
    



return 0;
}