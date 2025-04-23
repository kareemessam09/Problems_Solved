#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

struct ss{
    pair<string,ll> p;
};
bool compare(const ss &g1, const ss &g2) {

    if (g1.p.second == g2.p.second)
    {
        return g1.p.first < g2.p.first;
    }
    
    
    return g1.p.second > g2.p.second;
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

int n;
cin >> n;

vector<ss> v(n);


for (ll i = 0; i < n; i++)
{
    cin>>v[i].p.first >> v[i].p.second;
}

sort(all(v) , compare);

for (ll i = 0; i < n; i++)
{
    cout<<v[i].p.first <<" "<< v[i].p.second<<nl;
}







return 0;
}