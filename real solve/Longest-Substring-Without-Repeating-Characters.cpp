class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int cur = 0;
        int l = 0; 
        int best = 0;

        for(int r = 0; r < s.length() ; r++){

            while (seen.find(s[r]) != seen.end()) {
                seen.erase(s[l]);
                l++;
            }
    
            seen.insert(s[r]);
            best = max(best, r - l + 1); 

        }

        return best;

    }
};