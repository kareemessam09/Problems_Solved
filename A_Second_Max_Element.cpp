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
cin>>n;


while (n--)
{
    set<long long> s;
    int t;
    long long g;
    cin>>t;
    while (t--)
    {
        cin>>g;
        s.insert(g);
    }

    if (s.size() <= 1)
    {
        cout<<-1<<"\n";
        continue;

    }

        auto it = s.rbegin();
        ++it;
        cout<<*it<<"\n";
    
    
}



return 0;
}