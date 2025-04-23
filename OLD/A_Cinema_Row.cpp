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
    cin>>n;
    int a[n];
    int pl[n],pr[n];
    int m=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m=max(m,a[i]);
        pl[i]=m;
    }
    m=INT_MIN;
    for(int i=n-1; i>=0; i--)
    {
        m=max(m,a[i]);
        pr[i]=m;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==pl[i]&&a[i]<pr[i])
        {
            cout<<"left";
        }
        else if(a[i]==pr[i]&&a[i]<pl[i])
        {
            cout<<"right";
        }
        else if(a[i]==pl[i]&&a[i]==pr[i])
        {
            cout<<"both";
        }
        else cout<<"none";
        cout<<endl;
    }
 


return 0;
}