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

    while(t--) {
        long long r;
        cin >> r;

        long long points_in_r = 4*r*r;
        long long points_in_r_minus_1 = 4*(r-1)*(r-1);
        long long result = points_in_r - points_in_r_minus_1;

        cout << result << "\n";
    }


return 0;
}