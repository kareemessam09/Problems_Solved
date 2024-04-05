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
cin>>n;
int x=0,y=0,z=0;
for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    x+=a;
    y+=b;
    z+=c;
}
if(x==0 && y==0 && z==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}


return 0;
}