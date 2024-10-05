#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)



bool check2x2(const vector<string>& grid, int x, int y) {
    int black = 0, white = 0;
    for (int i = x; i < x + 2; ++i) {
        for (int j = y; j < y + 2; ++j) {
            if (grid[i][j] == '#') {
                black++;
            } else {
                white++;
            }
        }
    }
    return (black == 4 || white == 4 || black == 3 || white == 3);
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

vector<string> grid(4);
    for (int i = 0; i < 4; ++i) {
        cin >> grid[i];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (check2x2(grid, i, j)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;


return 0;
}