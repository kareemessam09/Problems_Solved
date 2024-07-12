#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)



int main() {
KemOn09();
int n;
cin >> n;
vector<pair<int,int>> vv(n);

for (size_t i = 0; i < n; i++)
{
    cin >> vv[i].second >> vv[i].first;
}

sort(vv.rbegin(),vv.rend());

for (size_t i = 0; i < n; i++)
{
    
    cout<<vv[i].second<<" "<<vv[i].first<<"\n";
    
}





return 0;
}