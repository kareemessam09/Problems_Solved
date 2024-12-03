#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back


void find_ebne_number(string s, int n) {
    string result = "";
    int odd_count = 0;

    for (char c : s) {
        if ((c - '0') % 2 != 0) {
            result += c;
            odd_count++;
        }
        if (odd_count == 2) {
            cout << result << endl;
            return;
        }
    }

    cout << "-1" << endl;
}


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);


int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        find_ebne_number(s, n);
    }
    






return 0;
}