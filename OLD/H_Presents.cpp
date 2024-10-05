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
cin >> n;
int arr[n];
for (size_t i = 0; i < n; i++)
{
    cin >> arr[i];
}

int res[n];

for (size_t i = 0; i < n; i++)
{
    res[arr[i]-1] = i+1;
}


for (size_t i = 0; i < n; i++)
{
    cout << res[i] << " ";
}


return 0;
}

