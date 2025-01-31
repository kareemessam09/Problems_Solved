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

ll n;
cin >> n;

while (n--)
{
    ll l,r;
    cin>>l>>r;
    ll ma = max(l,r);
    ll mi = min(l,r);

    mi--;

    ll res1 = ma * (ma + 1) /2;
    ll res2 = mi * (mi + 1) /2;

    cout<<res1-res2<<nl;
}





return 0;
}