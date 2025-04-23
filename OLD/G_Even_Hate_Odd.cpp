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

   int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 2 != 0){
            for (int i = 0; i < n; i++){
                int temp;
                cin >> temp;
            }
            cout << -1 << "\n";
            continue;
        }
        
        int evenCount = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(num % 2 == 0)
                evenCount++;
        }
        int operations = abs(evenCount - n/2);
        cout << operations << "\n";
    }

return 0;
}