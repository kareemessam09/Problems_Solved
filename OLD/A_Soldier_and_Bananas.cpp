#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
ll k,n,w;
cin>>k>>n>>w;
ll sum=0;
for(int i=1;i<=w;i++){
    sum+=i*k;
}
if(sum>n){
    cout<<sum-n;
}
else{
    cout<<0;
}





return 0;
}