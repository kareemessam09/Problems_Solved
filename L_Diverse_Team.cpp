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

int n,k;
cin >> n >>k;
int arr[n+1];
int freq[1001] = {0};
vector<int> v;

for (int i = 1; i <= n; i++)
{
    cin>>arr[i];
    freq[arr[i]]++;
    if (freq[arr[i]] == 1)
    {
        v.pb(i);
    }

}

if (v.size() >= k)
{
    cout<<"YES"<<nl;
    for (int i = 0; i < k; i++) {
            cout << v[i] << " ";
        } 
}else
{
    cout<<"NO";
}







return 0;
}