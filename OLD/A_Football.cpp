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



if ((s.find("0000000") != string::npos) ||( s.find("1111111") != string::npos))
{
    cout<<"YES";
}else
{
    cout<<"NO";
}









return 0;
}