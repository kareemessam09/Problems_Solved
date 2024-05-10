#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();

int t;
    cin >> t;

    while(t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(k+1), b(k+1), speed(k+1), prefix(k+1);
        for(int i = 1; i <= k; i++) cin >> a[i];
        for(int i = 1; i <= k; i++) cin >> b[i];

        for(int i = 1; i <= k; i++) speed[i] = (b[i] - b[i-1]) / (a[i] - a[i-1]);
        for(int i = 1; i <= k; i++) prefix[i] = prefix[i-1] + (a[i] - a[i-1]) * speed[i];

        while(q--) {
            int d;
            cin >> d;

            int idx = upper_bound(all(a), d) - a.begin() - 1;
            int time = prefix[idx] + (d - a[idx]) * speed[idx];

            cout << time << "\n";
        }
    }
    
return 0;
}