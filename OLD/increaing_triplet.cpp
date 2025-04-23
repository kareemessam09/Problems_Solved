#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

bool increasingTriplet(vector<int>& nums) {  // 1 2 3 4 5 
        int n = nums.size(); // 5
        int f = INT_MAX , s = INT_MAX;

        for (auto &&i : nums)
        {
            if (i<= f)
            {
                f = i;
            }else if(i <= s){
                s = i;
            }else
            {
                return true;
            }
            
            
        }
        
        
        return false;

    }



int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);


cout<<increasingTriplet({1,2,3,4});


return 0;
}