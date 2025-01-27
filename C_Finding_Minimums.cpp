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

ll n, k;
cin >> n >> k;

vector<int> v(n);
    for (size_t i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (size_t i = 0; i < n; i += k) {
        int mi = INT_MAX;
        for (size_t j = i; j < i + k && j < n; ++j) {
            mi = min(mi, v[j]);
        }
        cout << mi << " ";
    }











return 0;
}