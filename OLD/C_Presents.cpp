#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n;
cin >> n;

vector<int> s(n), r(n);

for (size_t i = 0; i < n; i++)
{
    cin>>s[i];
}

for (size_t i = 0; i < n; i++)
{
    r[s[i] - 1] = i + 1;
}

for (size_t i = 0; i < n; i++) {
        cout << r[i] << " ";
    }



return 0;
}