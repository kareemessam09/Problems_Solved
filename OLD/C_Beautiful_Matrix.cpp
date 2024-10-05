#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();

int arr[5][5];
int x,y;
for (size_t i = 0; i < 5; i++)
{
    for (size_t j = 0; j < 5; j++)
    {
        cin>>arr[i][j];
        if (arr[i][j] == 1)
        {
            x = i+1;
            y = j+1;
        }   
    } 
}
cout<<(abs(x-3) + abs(y-3));

return 0;
}