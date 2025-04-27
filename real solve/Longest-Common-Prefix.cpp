#define all(x) (x).begin(), (x).end()

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";

    sort(all(strs));

    string first = strs[0];
    string last = strs[strs.size() - 1];
    string pref = "";

    for(int i = 0; i < first.size() ; i++){
        
        if (i < last.size() && first[i] == last[i]) {
            pref+=first[i];
        }else{
            break;
        }

    }

    return pref;

    }
};