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

ll n;
cin >> n;

ll row = n / 4;
ll col;
if(row % 2 == 0){
    col = n%4;
}else
{
    col = 3 - (n%4);
}

cout<< row <<" "<<col;




return 0;
}