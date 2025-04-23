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

int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;

        vector<int> result;
        long long sum = 0;

        for (int i = n; i > 0 && sum < s; --i) {
            if (sum + i <= s) {
                result.push_back(i);
                sum += i;
            }
        }

        if (sum == s) {
            for (int num : result) {
                cout << num << " ";
            }
        } else {
            cout << "-1";
        }
        cout<<nl;
    }



return 0;
}