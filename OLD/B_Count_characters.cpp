#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

vector<int> high;
vector<int> low;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

string s;
cin>>s;

int low[30] = {0};
int high[30] = {0};


for (size_t i = 0; i < s.size(); i++)
{
    if (s[i] >= 'A' && s[i] <= 'Z') { 
            high[s[i] - 'A']++;
        }

    if (s[i] <= 'z' && s[i] >= 'a')
    {
        low[s[i] - 'a']++;
    }
    
}


for (size_t i = 0; i < 30; i++)
{
    if(high[i] > 0)   cout << char(i + 'A') << " " << high[i] << nl;

}


for (size_t i = 0; i < 30; i++)
{
    if(low[i] > 0)   cout << char(i + 'a') << " " << low[i] << nl;

}









return 0;
}