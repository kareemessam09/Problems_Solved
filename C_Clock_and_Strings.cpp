#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int t;
    cin >> t;

while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
// 2 9 10 6
        if (a < c && d < b) {
            cout << "NO" << endl;
        }else if(a < c && d < b)
        {
            cout<<"YES";
        }
         else {
            cout << "YES" << endl;
        }
    }




return 0;
}