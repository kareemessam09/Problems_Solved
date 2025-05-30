class Solution {
public:
    int maxArea(vector<int>& height) {

    int l = 0;
    int r = height.size()-1;
    int best = 0;

    while(l<r){
        if((min(height[l],height[r]) * (r-l)) > best){
            best = (min(height[l],height[r]) * (r-l));
        }

        if(height[l] == height[r]){
            l++;
            r--;
        }else if(height[l] > height[r]){
            r--;
        }else{
            l++;
        }
    }
    

    return best;

    }
};