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

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int left = 0, right = n - 1;
    while (left <= right) {
        if (left == right) {
            cout << a[left];
        } else {
            cout << a[left] << " " << a[right] << " ";
        }
        left++;
        right--;
    }



return 0;
}