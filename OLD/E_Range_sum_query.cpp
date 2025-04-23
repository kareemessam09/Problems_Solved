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

ll n,q;
cin >> n >> q;
ll arr[n];
ll pref[n+1] = {0};

for (ll i = 1; i <= n; i++)
{
    cin>>arr[i];
    pref[i] = pref[i-1] + arr[i];
}

while (q--)
{
    int l,r;
    cin>>l>>r;
    cout<<pref[r] - pref[l-1] <<nl;
}







return 0;
}