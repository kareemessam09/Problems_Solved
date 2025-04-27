#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int a,b,temp;
cin>>a>>b;

int n = a , z = b;
while(b != 0){
    temp = b;
    b = a%b;
    a = temp;
}

cout<<"HCF: " << a <<" ";
cout<<"LCM: " << (n*z) / a << " ";



return 0;
}