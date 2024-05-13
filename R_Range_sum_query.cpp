#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n,q;
cin>>n>>q;
ll a[n+1];
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
ll pre[n];
pre[0]=a[0];
for(int i=1;i<=n;i++)
{
    pre[i]=pre[i-1]+a[i];
}
while(q--)
{
    int l,r;
    cin>>l>>r;
    cout<<pre[r]-pre[l-1]<<endl;
}





return 0;
}