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

int n;
cin >> n;

while (n--)
{
    int l;cin>>l;
    vector<ll> v(l);
    ll sum = 0;
    for (int i = 0; i < l; i++)
    {
        cin>>v[i];
    }

    sort(all(v));
    

    ll maxRevenue = 0;
        for (int i = 0; i < l; i++) {
            ll m = v[i];
            ll revenue = m * (l - i);
            maxRevenue = max(maxRevenue, revenue);
        }

        cout << maxRevenue << endl;
    


    
    
    
}




return 0;
}