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

ll n, m, k;
cin >> n >> m >> k;

 
ll result = min(k, (n + min(m, n)) / 2);
 
cout << result << endl;





return 0;
}