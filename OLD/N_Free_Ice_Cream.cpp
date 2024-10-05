#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
ll n,pols;
cin>>n>>pols;
ll c = 0;
while (n--)
{
    char op;
    ll x;
    cin>>op>>x;
    if (op == '+')
    {
        pols+=x;
    }
    else{
        if (pols < x)
        {
            c++;
        }else{
        pols>=x?pols-=x:pols=0;
        }
        
    }
    
}

cout<<pols<<" "<<c<<endl;




return 0;
}