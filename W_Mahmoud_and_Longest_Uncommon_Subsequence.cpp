#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
string a,b;
cin>>a>>b;
if(a==b){
    cout<<-1;
}
else{
    cout<<max(a.size(),b.size());
}
return 0;
}