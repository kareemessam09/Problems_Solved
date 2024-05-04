#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)

bool isBinaryDecimal(ll n) {
    while (n != 0) {
        ll digit = n % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}
string canBeRepresentedAsProductOfBinaryDecimals(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0){
            if (!isBinaryDecimal(i)) {
                return "NO";
            }
            n /= i;
        }
    }
    if (n > 1 && !isBinaryDecimal(n)) {
        return "NO";
    }
    return "YES";
}

int main() {
KemOn09();
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    if (isBinaryDecimal(n))
    {
        cout<<"YES"<<endl;
    }else
    {
         cout<<canBeRepresentedAsProductOfBinaryDecimals(n)<<endl;
    }
    
    
    
   

}




return 0;
}