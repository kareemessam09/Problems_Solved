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
int k;
cin >> n >> k;
while(k--) {
    if(n % 10 == 0) {
        n /= 10;
    } else {
        n -= 1;
    }
}
cout << n;



return 0;
}