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
cin >> n>>q;
ll freq[100001] = {0};
vector<ll> v;
ll x;
while (n--)
{
    cin>>x;
    if (freq[x] == 0)
    {
        freq[x]++;
        v.pb(x);
    }
    
}
sort(all(v));


while (q--)
{
    ll qq;
    cin>>qq;

    ll l = lower_bound(v.begin(),v.end() , qq) - v.begin();
    ll r = v.end() - upper_bound(v.begin(),v.end(),qq);

    cout<<l<<" "<<r <<nl;


}






return 0;
}