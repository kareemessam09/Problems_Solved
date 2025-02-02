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

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int changes1 = 0, changes2 = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (a[i] < 0) changes1++;
        } else {
            if (a[i] > 0) changes1++;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (a[i] > 0) changes2++;
        } else {
            if (a[i] < 0) changes2++;
        }
    }

    cout << min(changes1, changes2) << "\n";

return 0;
}