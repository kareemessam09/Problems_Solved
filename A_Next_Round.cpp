#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)




int main() {
KemOn09();
int n,k;
cin >> n >> k;

vector<int> v(n);

for(int i=0; i<n; i++){
    cin >> v[i];
}

int count = 0;

for(auto x: v){
    if (x >= v[k-1] && x != 0){
        count++;
    }
}

cout<<count;




return 0;
}