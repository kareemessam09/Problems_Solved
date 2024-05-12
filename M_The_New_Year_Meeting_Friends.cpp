#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int a,b,c;
cin>>a>>b>>c;
int arr[3]={a,b,c};
sort(arr,arr+3);
int ans=0;
ans+=arr[1]-arr[0];
ans+=arr[2]-arr[1];
cout<<ans;



return 0;
}