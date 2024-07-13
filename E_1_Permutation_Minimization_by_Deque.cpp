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
    int n, a;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (d.empty() || a < d[0])
            d.push_front(a);
        else
            d.push_back(a);
        }
    for (int x : d)
        cout << x << ' ';
        cout << '\n';
    
    }


return 0;
}