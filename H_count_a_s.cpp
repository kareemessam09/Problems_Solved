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

string s;
cin>>s;
int n = s.length();

int pref[n+1] = {0};


for (int i = 1; i <= n; i++)
{
    if(s[i-1] == 'a') pref[i]++;
    if(i > 0) pref[i] += pref[i-1];
}

int q;
cin>>q;

while (q--)
{
    int l,r;
    cin>>l>>r;
    cout<<pref[r] - pref[l-1] << nl;
}






return 0;
}