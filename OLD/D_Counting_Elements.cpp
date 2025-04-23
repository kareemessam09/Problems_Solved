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

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    unordered_set<int> elements(v.begin(), v.end());
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (elements.find(v[i] + 1) != elements.end()) {
            count++;
        }
    }

    cout << count << "\n";






return 0;
}