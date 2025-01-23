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

#include <iostream>
#include <climits>  // For INT_MAX and LLONG_MAX
using namespace std;


    unsigned long long n, k, a;
    cin >> n >> k >> a;

    // Calculate (n * k)
    unsigned long long product = n;
    product *= k;

    if (product % a != 0) {
        cout << "double" << endl;
    } else {
        unsigned long long result = product / a;

        if (result <= INT_MAX) {
            cout << "int" << endl;
        } else if (result <= LLONG_MAX) {
            cout << "long long" << endl;
        } else {
            cout << "double" << endl;
        }
    }

 


return 0;
}