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

int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long moves_x = (x + k - 1) / k; 
        long long moves_y = (y + k - 1) / k;

        long long total_moves;
        if (moves_y >= moves_x) {
            total_moves = 2 * moves_y;
        } else {
            total_moves = 2 * moves_x - 1;
        }

        cout << total_moves << endl;
    }


return 0;
}