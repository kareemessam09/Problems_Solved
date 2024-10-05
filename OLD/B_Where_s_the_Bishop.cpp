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
cin >> n;

char arr[8][8];

while (n--)
{
    for (size_t  i= 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
        cin>>arr[i][j];
        }
    
    }

    for (size_t  i= 1; i < 7; i++)
    {
        for (size_t j = 1; j < 7; j++)
        {
    
            if (arr[i][j] == '#' &&
                arr[i-1][j-1] == '#' &&
                arr[i-1][j+1] == '#' &&
                arr[i+1][j-1] == '#' &&
                arr[i+1][j+1] == '#') {
                cout << i+1 << " " << j+1;
                }

        }
    }


cout<<endl;


}



return 0;
}