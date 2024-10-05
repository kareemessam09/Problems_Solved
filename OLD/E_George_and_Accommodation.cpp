#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int t;
cin>>t;
int p,q,ans = 0;

while (t--)
{
    cin>>p>>q;
    ans+= ((q-p) >= 2 ? 1:0);
}

cout<<ans;


return 0;
}