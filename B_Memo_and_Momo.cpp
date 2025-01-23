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

ll a,b,k;
cin>>a>>b>>k;

if (a%k == 0 && b%k==0)
{
    cout<<"Both";
    return 0;
}
if (a%k==0)
{
    cout<<"Memo";
    return 0;
   
}
if (b%k==0)
{
    cout<<"Momo";
    return 0;
}

cout<<"No One";








return 0;
}