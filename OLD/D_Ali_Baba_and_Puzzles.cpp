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

ll a,b,c,d;
cin>>a>>b>>c>>d;

if ((a+b-c) == d || (a-b+c) == d || (a-b*c) == d || (a+b*c) == d || (a*b+c) == d || (a*b-c) == d)
{
    cout<<"YES";
}else
{
    cout<<"NO";
}





return 0;
}