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
vector<short> arr(n);

for (size_t i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(all(arr));

int c = 0;
int l = n-1,r = 0;

while (l >= r)
{
   if (arr[l] == 4) {
            c++;
            l--;
        } else if (arr[l] + arr[r] > 4) {
            c++;
            l--;
        } else if (arr[l] + arr[r] == 4) {
            c++;
            l--;
            r++;
        } else {
            int sum = arr[l];
            while (r < l && sum + arr[r] <= 4) {
                sum += arr[r];
                r++;
            }
            c++;
            l--;
        }
    

}

cout<<c;


return 0;
}