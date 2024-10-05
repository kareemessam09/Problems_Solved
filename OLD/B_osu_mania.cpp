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
        int n;
        cin >> n;
        vector<int> columns(n);

        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < 4; ++j) {
                if (row[j] == '#') {
                    columns[n - 1 - i] = j + 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << columns[i] << " ";
        }
        cout << endl;
    }



return 0;
}