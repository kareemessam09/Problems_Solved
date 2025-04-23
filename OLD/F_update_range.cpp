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

int n,q;
cin >> n>>q;
ll arr[n+1];
ll diff[n+1] = {0};

for (int i = 1; i < n+1; i++)
{
    cin>>arr[i];
}

while (q--)
{
    ll l,r,v;
    cin>>l>>r>>v;

    diff[l] +=v;
    if (r + 1 <= n )
    {
        diff[r+1] -= v;
    }
    


}

for (size_t i = 1; i < n+1; i++)
{
    diff[i] += diff[i - 1];
    arr[i] += diff[i];
    cout<<arr[i]<< " ";
}








return 0;
}