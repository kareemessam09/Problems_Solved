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

string arr[n];
for (size_t i = 0; i < n; i++)
{
    cin>>arr[i];
}

map<string,bool> mp;

for (int i = n-1; i >= 0 ; i--)
{
    bool isSeen = (mp.find(arr[i]) != mp.end()) ? mp[arr[i]] : false;

    if (!isSeen)
    {
        cout<<arr[i]<<nl;
    }
    
    mp[arr[i]] = true;

}








return 0;
}