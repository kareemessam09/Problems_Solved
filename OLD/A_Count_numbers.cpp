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


int n,q; cin>>n>>q;
int freq[n+1] = {0};

while (q--)
{
    int a,b;
    cin>>a>>b;
    if (a == 1) freq[b]++;
    if (a == 2) cout<<freq[b]<<nl;

}





return 0;
}