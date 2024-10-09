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

int t,k1,k2;
cin>>t>>k1>>k2;

priority_queue<ll> pq;
vector<ll> a(t);
vector<ll> b(t);

for (size_t i = 0; i < t; i++)
{
    cin>>a[i];
}

for (size_t i = 0; i < t; i++)
{
    cin>>b[i];
    pq.push(abs(a[i] - b[i]));
}

int k = k1+k2;

while (k--)
{
    ll x = pq.top();
    pq.pop();
    x--;
    x = abs(x);
    pq.push(x);

}

ll res = 0;
while (!pq.empty())
{
    ll x = pq.top();
    res += x * 1l *x;
    pq.pop(); 
}



cout<<res;


return 0;
}