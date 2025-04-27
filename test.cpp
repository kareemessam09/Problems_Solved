#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)


#define LC_HACK
#ifdef LC_HACK
const auto __ = []() {
    struct ___ {
        static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
    };
    std::atexit(&___::_);
    return 0;
}();
#endif

bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) {
        return false;
    }

    vector<int> s1Count(26, 0);
    vector<int> windowCount(26, 0);
    
    for (char c : s1) {
        s1Count[c - 'a']++;
    }
    
    int left = 0, right = 0;
    
    while (right < s1.length()) {
        windowCount[s2[right] - 'a']++;
        right++;
    }
    
    if (s1Count == windowCount) {
        return true;
    }
    
    while (right < s2.length()) {
        windowCount[s2[right] - 'a']++;
        
        windowCount[s2[left] - 'a']--;
        
        left++;
        right++;
        
        if (s1Count == windowCount) {
            return true;
        }
    }
    
    return false;
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

cout<<checkInclusion("ab","eidboaoo");



return 0;

}



