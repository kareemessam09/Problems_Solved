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
long long c;
queue<int> q;
int a;
while (n--)
{
    cin>>a;
    if (a == 1)
    {
        cin>>c;
        q.push(c);
    }else if (a == 2 && !q.empty())
    {
        q.pop();
    }else if (a == 3)    
    {
        cout << (q.size() == 0 ? "Empty!" : to_string(q.front())) << "\n";
        
    }

}




return 0;
}