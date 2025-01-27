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

for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j && i == n / 2) {
                cout << 'X';
            } else if (i == j) {
                cout << '\\';
            } else if (i + j == n - 1) {
                cout << '/';
            } else {
                cout << '*';
            }
        }
        cout << '\n';
    }
    


return 0;
}