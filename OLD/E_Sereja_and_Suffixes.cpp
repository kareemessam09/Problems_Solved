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

int n,q;
cin >> n>>q;

vector<int> v(n+1);


for (int i = 1; i <= n; i++)
{
    cin>>v[i];
}

vector<int> seen(n+2,0);

int freq[100001] = {0};

for (int i = n; i >= 1; i--) { 

        if (++freq[v[i]] == 1) {  
            seen[i] = seen[i + 1] + 1;
        } else {
            seen[i] = seen[i + 1];
        }
    }


while (q--)
{
    int l;
    cin>>l;
    cout<<seen[l]<<nl;
}



return 0;
}