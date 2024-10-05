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
int freq[26] = {};
while (n--)
{
    char c;
    cin>> c;
    freq[c - 'a']++;
}

for (size_t i = 0; i < 26; i++)
{
    for (size_t j = 0; j < freq[i]; j++)
    {
        cout<< (char) (i + 'a');
    }
    
    
}



return 0;
}