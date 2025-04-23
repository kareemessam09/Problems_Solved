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

ll n,k;
cin >> n>>k;

vector<ll> v(n);

for (ll i = 0; i < n; i++)
{
    cin>>v[i];
}

sort(all(v));

ll s = 0;

for (ll i = n - 1; k > 0; i-- , k--)
{
    if (v[i] > 0) {
            s += v[i];
        } else {
            break;
        }
}

cout<<s;





return 0;
}