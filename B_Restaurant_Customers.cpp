#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)



ll arr[100000];
ll updates[100000];

int main() {
KemOn09();


int n;
cin >> n;




int l,r;

while (n--)
{
    cin>>l>>r;
    updates[l]++;
    updates[r+1]--;

}

for (size_t i = 1; i <= mx; i++)
{
    updates[i] += updates[i-1];
}


ll ans = 0;
for (size_t i = 1; i <= mx; i++)
{
    ans = max(ans, updates[i]);
}

cout<<ans;




return 0;
}