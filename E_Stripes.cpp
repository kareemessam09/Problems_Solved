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
        vector<string> grid(8);
        for (int i = 0; i < 8; ++i) {
            cin >> grid[i];
        }
        bool redLast = false;
        for (int i = 0; i < 8; ++i) {
            bool allRed = true;
            for (int j = 0; j < 8; ++j) {
                if (grid[i][j] != 'R') {
                    allRed = false;
                    break;
                }
            }
            if (allRed) {
                redLast = true;
                break;
            }
            }

        bool blueLast = false;
        for (int j = 0; j < 8; ++j) {
            bool allBlue = true;
            for (int i = 0; i < 8; ++i) {
                if (grid[i][j] != 'B') {
                    allBlue = false;
                    break;
                }
            }
            if (allBlue) {
                blueLast = true;
                break;
            }
        }

        if (redLast) {
            cout << "R" << endl;
        } else if (blueLast) {
            cout << "B" << endl;
        }

    }
return 0;
}