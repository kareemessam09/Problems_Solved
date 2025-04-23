#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n,1);
        vector<int> suf(n,1);
        vector<ll> res(n);



        for (size_t i = 1; i < n; i++)
        {
            pref[i] = pref[i-1] * nums[i-1];
        }

        for (size_t i = n - 2; i >= 0; --i)
        {
            suf[i] = suf[i+1] * nums[i+1];
        }

        for (size_t i = 0; i < n; i++)
        {
            res[i] = pref[i] * suf[i];
        }
        
        return res;



    }


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);




return 0;
}