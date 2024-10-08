#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

string mergeAlternately(string word1, string word2) {
      string s = "";
      int len1 = word1.size(),len2 = word2.size();
      int i = 0, j = 0;

      while (i < len1 || j < len2)
      {
        if(i < len1) s += word1[i++];
        if(j < len2) s += word2[j++];
        
        
      }
       
       
       return s;
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);


cout<<mergeAlternately("DSF","SDF");


return 0;
}