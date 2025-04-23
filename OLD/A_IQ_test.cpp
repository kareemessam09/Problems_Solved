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
int lEven = 0 , lOdd = 0 , o = 0 , e = 0;

for (size_t i = 0; i < n; i++)
{
    cin>>v[i];


    if (v[i] % 2 == 0) {
        e++;
        lEven = i+1; 
    } else {
        o++;
        lOdd = i+1;
    }



       
        

}

if (o == 1)
{
    cout<<lOdd ;
}else
{
    cout<<lEven;
}













return 0;
}