#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)


vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> seen;

    for(int i = 0; i<nums.size() ; i++){
        int comp = target - nums[i];

        if(seen.find(comp) != seen.end()){
            return {seen[comp] , i};
        }

        seen[nums[i]] = i ;

    }

    return {};
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

vector<int> nums = {3,2,4};
int targt = 6;


vector<int>vv = twoSum(nums,targt);
cout<< vv[0] <<vv[1];








return 0;
}