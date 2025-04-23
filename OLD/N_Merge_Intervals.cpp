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

int n;
cin >> n;

vector<vector<int>> v(n,vector<int>(2));

for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> v[i][j]; 
        }
    }

sort(all(v));

vector<vector<int>> merged;


for(auto i : v){

    if (merged.empty() || merged.back()[1] < i[0])
    {
        merged.push_back(i);
    }else
    {
        merged.back()[1] = max(merged.back()[1],i[1]);
    }
    
}


for(auto i : merged){
    cout<<i[0]<<" "<<i[1]<<nl;
}









return 0;
}