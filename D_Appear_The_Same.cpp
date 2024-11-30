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

string s;
    cin >> s;

    vector<int> v(26, 0); 

    for (char c : s) {
        v[c - 'a']++;
    }

    vector<int> count; 
    for (int f : v) {
        if (f > 0) {
            count.push_back(f);
        }
    }



    sort(count.begin(), count.end());  

    int n = count.size();
    bool valid = false;

    if (count[0] == count[n - 1]) {
        valid = true;
    }
    else if ((count[0] == 1 && count[1] == count[n - 1]) ||  
             (count[n - 1] == count[n - 2] + 1 && count[0] == count[n - 2])) { 
        valid = true;
    }

    cout << (valid ? "YES" : "NO") << "\n";

return 0;
}