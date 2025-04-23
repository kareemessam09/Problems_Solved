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


if (n%2==0)
{
    for (ll i = 0; i < n - 1; i++)
    {
        cout<<"a ";
    }
    cout<<"b";
    
}else
{
   for (ll i = 0; i < n; i++)
    {
        cout<<"a ";
    }
}






return 0;
}