class Solution {
public:
    bool isAnagram(string s, string t) {
        
    if(s.length() != t.length()) return false;

    vector<int>freq(256,0);

    for(int i = 0; i < s.length() ; i++){
        freq[s[i]]++;
        freq[t[i]]--;
    }

    for (int count : freq) {
        if (count != 0) return false;
    }

    return true;

}
};