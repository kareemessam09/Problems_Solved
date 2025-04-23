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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            pq.push(x);
        }

        while (pq.size() > 1) {
            int a = pq.top(); 
            pq.pop();
            int b = pq.top(); 
            pq.pop();
            int x = a + b - 1; 
            pq.push(x);
        }

        cout << pq.top() << nl;
    }

    return 0;
}