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
string s;
cin >> s;

unordered_map<string,int> mp;

for (size_t i = 0; i < n; i++)
{
    string ns = s.substr(i,2);
    mp[ns]++;
}

int max = 0;
string ans;

for (auto &&i : mp)
{
    if (i.second >= max)
    {
        max = i.second;
        ans = i.first;
    }
    
}

cout<<ans;


return 0;
}