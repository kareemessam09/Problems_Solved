#define all(x) (x).begin(), (x).end()
class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {

    sort(all(nums));

    
    vector<vector<int>> ans;


    for(int i = 0 ; i < nums.size() - 2 ; i++){

        if(i > 0 && nums[i] == nums[i-1]) continue;

        int j = i+1;
        int k = nums.size()-1;
        
        while(j < k){

            int tot = nums[i] + nums[j] + nums[k];

            if(tot>0){
                k--;
            } else if(tot < 0){
                j++;
            }else{
                ans.push_back({ nums[i] , nums[j] , nums[k] });

                do { j++; } while(j < k && nums[j] == nums[j-1]);
                do { k--; } while(j < k && nums[k] == nums[k+1]);
            }

            
        }

    }

    return ans;
}

};