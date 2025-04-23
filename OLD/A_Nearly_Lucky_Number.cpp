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
ll c = 0;
for (size_t i = 0; i < s.size(); i++)
{
    if (s[i] == '7' || s[i] == '4')
    {
        c++;
    }
    
}

if (c == 4 || c == 7)
{
    cout<<"YES";
}else{
    cout<<"NO";
}




return 0;
}