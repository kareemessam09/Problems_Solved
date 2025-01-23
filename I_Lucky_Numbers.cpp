#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);
#include <iostream>
using namespace std;

int N;
cin >> N;

int ones = N % 10; 
int tens = N / 10; 

if (tens == 0 || ones == 0)
{
    cout<<"YES";
}else{
      if ((tens % ones == 0 || ones % tens == 0) ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

  
 

return 0;
}