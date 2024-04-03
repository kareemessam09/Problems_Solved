#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin >> n;

if (n<=5)
{
    cout<<1;
}else if (n> 5 && n%5 == 0)
{
    cout<<n/5;

}else{
    int x = n / 5;
    cout<<x+1;

}






return 0;
}