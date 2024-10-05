#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


long long arr[1001][1001];


int main() {
KemOn09();
int n,m,x,y;
cin >>n>>m>>x>>y;




for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= m; j++)
    {
        cin>>arr[i][j];
    }
    
}

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= m; j++)
    {
        arr[i][j] += arr[i][j-1];
    }
    
}
for (int i = 1; i <= m; i++)
{
    for (int j = 1; j <= n; j++)
    {
        arr[j][i] += arr[j-1][i];
    }
    
}

long long ans = -1e15;

for (int d = x; d <= n; d++)
{
    for (int r = y; r <= m; r++)
    {
        int l = r - y + 1;
        int u = d - x + 1;

        ans = max(ans , arr[d][r] - arr[d][l-1] - arr[u-1][r] + arr[u-1][l-1] );

    }
    
}

cout<<ans;


return 0;
}