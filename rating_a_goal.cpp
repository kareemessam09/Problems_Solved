#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n,k;
cin>>n>>k;
ll p;
int c= 0;
while (n--)
{
    cin>>p;
    if (p%k == 0) c++;
    
}

cout<<c;

return 0;
}