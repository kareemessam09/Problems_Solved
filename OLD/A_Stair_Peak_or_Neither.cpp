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
int a,b,c;
for(int i = 0; i < n; i++) {
    cin>>a>>b>>c;
    string s1 = "STAIR";
    string s2 = "PEAK";
    string s3 = "NONE";

    if(a < b && b < c && a < c) {
        cout<<s1<<endl;
    }else if(a < b && b > c) {
        cout<<s2<<endl;
    }else {
        cout<<s3<<endl;
    }
}


return 0;
}