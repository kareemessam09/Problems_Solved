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
string s;
cin >> n;


while (n--)
{
    cin>>s;
    int l = s.length()/2;
    if (l != s.length()/2)
    {
        cout<<"NO";
        break;
    }

    string neww = "";

    for (size_t i = 0; i < l; i++)
    {
        neww+=s[i];

    }

    neww = neww+neww;

    if (neww == s)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    

    
    
    
}




return 0;
}