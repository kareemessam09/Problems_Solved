class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
    int best = nums[0];
    int cur = 0;

    for(int i = 0; i < nums.size() ; i++ ){
        if(cur < 0) cur = 0;

        cur+=nums[i];
        
        best = max(cur,best);
        
    }


    return best;
}
};