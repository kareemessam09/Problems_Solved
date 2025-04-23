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

string s,t;
cin>>s>>t;

reverse(s.begin(), s.end()); 

cout << (s == t ? "YES" : "NO") ;


return 0;
}