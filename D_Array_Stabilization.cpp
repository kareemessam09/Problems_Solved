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
vector<int> v(n);

for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

sort(all(v));  

int miinn = min((v[v.size()-2] - v[0]) , (v[v.size()-1] - v[1]));


cout<< miinn; 







return 0;
}