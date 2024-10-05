#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)
#define nl "\n"

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n;
cin >> n;
ll sum = 0;
vector<ll> v(n);
for (size_t i = 0; i < n; i++)
{
    cin>>v[i];
    sum+=v[i];
}

if (sum %2 == 0)
{
    cout<<sum;
}else
{
    ll minOdd = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        if (v[i] % 2 !=0)
        {
        minOdd = min(minOdd,v[i]);
        }
        
    }
    sum-=minOdd;
    cout<<sum;
    

}



return 0;
}