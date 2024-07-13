#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin >> n;
while (n--)
{
    int t;
    cin>>t;
    multiset<long long , greater<>> s;
    long long g;
    long long sum = 0;
    while (t--)
    {
        cin>>g;
        if (g!=0)
        {
            s.insert(g);
        }else
        {
            if (s.size() > 0)
            {
                sum += *s.begin();
                 
                s.erase(s.begin());
            }
            

        }

        
    }
    
    cout<<sum<<"\n";


}


return 0;
}