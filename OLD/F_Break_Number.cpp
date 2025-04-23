#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back


ll time(ll x){
    ll c = 0;
    while (x % 2 ==0)
    {
        x /= 2;
        c++;
    }

    return c;
    
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

ll n;
cin >> n;
ll mm = 0;
while (n--)
{
    ll a;
    cin>>a;
    mm = max(mm,time(a));
}

cout<<mm;






return 0;
}