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

vector<int> v(n);
int numOf0 = 0;
vector<int> ind;

for (int i = 0; i < n; i++)
{
    cin>>v[i];
    if (v[i] == 0)
    {
        numOf0++;
        ind.push_back(i);
    }
    
}

for (size_t i = 0; i < numOf0; i++)
{
    reverse((v.begin()),(v.begin() + ind[i]));
}

for (size_t i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}










return 0;
}