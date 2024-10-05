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
        int x, y;
        cin >> x >> y;

        int screens = (y + 1) / 2;
        int remaining = 15 * screens - 4 * y;

        if (x > remaining) {
            screens += (x - remaining + 14) / 15;

        cout << screens << "\n";
    }



return 0;
}