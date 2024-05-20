#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin>>n;
vector<pair<int,int>>v(n);

for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
    if(v[i].first!=v[i].second){
        cout<<"rated";
        return 0;
    }
}

for(int i=0;i<n-1;i++){
    if(v[i].first<v[i+1].first){
        cout<<"unrated";
        return 0;
    }
}

cout<<"maybe";

return 0;
}