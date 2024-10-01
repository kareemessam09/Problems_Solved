#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)


bool isDistinct(int x){
    set<char> d;
    string s = to_string(x);
    for (auto &&i : s)
    {
        if (d.count(i))
        {
            return false;
        }
        d.insert(i);
        
    }
    
    return true;
    
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int y;
cin >> y;

while (!isDistinct(y+1))
{
    y++;
}

cout<<++y;






return 0;
}

