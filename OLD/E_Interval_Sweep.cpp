#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

int a, b;
    cin >> a >> b;
 
    if (a == 0 && b == 0) {
        cout << "NO" << endl;
    } else if (a == 0) {
        cout << (b > 0 ? "YES" : "NO") << endl;
    } else if (b == 0) {
        cout << (a > 0 ? "YES" : "NO") << endl;
    } else {
        if (abs(a - b) <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }





return 0;
}