#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        if (x > 45) { 
            cout << -1 << "\n";
            continue;
        }

        vector<int> digits;
        for (int i = 9; i >= 1; --i) {
            if (x >= i) {
                x -= i;
                digits.push_back(i);
            }
        }

        for (int i = digits.size() - 1; i >= 0; --i) {
            cout << digits[i];
        }
        cout << "\n";
    }




return 0;
}