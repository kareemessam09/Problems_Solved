#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxm 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int a,b,c;
cin>>a>>b>>c;

int c1 = a+(b*c); //2
int c2 = (a+b)*c; //2
int c3 = a * b * c; // 1
int c4 = a * (b+c); // 2
int c5 = a+b+c;

int ans = max(c1,max(c2,max(c3,max(c4,c5))));
cout<<ans;


return 0;
}

/*if (c1 >= c2 && c1 >= c3 && c1 >= c4 && c1 >= c5)
{
    cout<<c1;
}else if(c2 >= c1 && c2 >= c3 && c2 >= c4 && c2 >= c5)
{
    cout<<c2;
}else if(c3 >= c1 && c3 >= c2 && c3 >= c4 && c3 >= c5)
{
    cout<<c3;
}else if(c4 >= c1 && c4 >= c2 && c4 >= c3 && c4 >= c5)
{
    cout<<c4;
}else
{
    cout<<c5;
}*/