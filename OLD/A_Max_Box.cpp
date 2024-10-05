#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) ((n) % 2 == 0)

int arr[100001];
ll pre[100001];

int main() {
    KemOn09();
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + arr[i];
    }

    ll ans = 0;

    for (int l = 1, r = k; r <= n; l++, r++) {
        ans = max(ans, pre[r] - pre[l-1]);
    }

    cout << ans;
    return 0;
}
