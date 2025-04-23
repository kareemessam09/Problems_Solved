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

int t;
cin>>t;
while (t--)
{
    int n, k;
    cin >> n>>k;
    vector<int> v(n);
    int cur = 0 , res = 0;

    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
        if (v[i] >= k)
        {
            cur+=v[i];
        }
        
        if (!v[i] && cur != 0)
        {
            cur--;
            res++;
        }
        
        
    }

cout<<res<<nl;

}









return 0;
}