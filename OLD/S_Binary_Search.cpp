#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
    ll n, x;
    cin >> n >> x;
    ll a[n];
    unordered_map<ll, ll> freq;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    while (x--)
    {
        ll k;
        cin>>k;

        if (freq[k]>0)
        {
            cout<<"found"<<endl;
        
        }else
        {
            cout<<"not found"<<endl;
        }
    }


return 0;
}