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
stack<ll> st;
stack<ll> mst;
while (n--)
{
    ll a,b;
    cin>>a;
    if (a == 1)
    {
        cin>>b;
        st.push(b);

        if (mst.empty())
        {
            mst.push(b);
        }else
        {
            ll mx = max(st.top(),mst.top());
            mst.push(mx);
        }
        
    }else
    {
        st.pop();
        mst.pop();
    }
    

cout<<mst.top()<<nl;

    
}




return 0;
}