#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)

int main() {
KemOn09();
int n, m;
cin >> n >> m;
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            cout << string(m, '#') << endl;
        } else {
            if (flag) {
                cout << string(m - 1, '.') << "#" << endl;
            } else {
                cout << "#" << string(m - 1, '.') << endl;
            }
            flag = !flag;
        }
    }

 
 
return 0;
}