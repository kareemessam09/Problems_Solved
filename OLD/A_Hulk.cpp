#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)


void solve(){

  
    

}

int main() {
ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


int n;
cin>>n;

for (size_t i = 0; i < n; i++)
{
    cout<<"I";
    if (i%2==0)
    {
        cout<<" hate ";
    }

    if (i%2 !=0)
    {
        cout<<" love ";
    }

    if (i == n-1)
    {
        break;
    }

    cout<<"that ";
        
}
cout<<"it";


return 0;
}