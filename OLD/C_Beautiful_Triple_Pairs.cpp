 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define mx 100000
 #define all(x) (x).begin(), (x).end()
 #define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
 #define isEven(n) (n % 2 ==0)
 
 
 int main() {
 KemOn09();

int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<tuple<int, int, int>, int> cnt;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++) {
            tuple<int, int, int> triplet = make_tuple(a[i], a[i + 1], a[i + 2]);
            vector<tuple<int, int, int>> mist = {
                make_tuple(0, a[i + 1], a[i + 2]),
                make_tuple(a[i], 0, a[i + 2]),
                make_tuple(a[i], a[i + 1], 0)
            };
            for (auto &trip : mist) {
                ans += cnt[trip] - cnt[triplet];
                cnt[trip]++;
            }
            cnt[triplet]++;
        }
        cout << ans << "\n";
    }
 
 return 0;
 }