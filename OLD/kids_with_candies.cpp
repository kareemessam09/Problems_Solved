#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

bool mxx(vector<int>& candies, int afteradd){
    vector<int> cc = candies;
    sort(all(cc));
    if (afteradd >= cc[candies.size()-1])
    {
        return true;
    }
    return false;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size());

        for (size_t i = 0; i < candies.size(); i++)
        {
            if (mxx(candies,candies[i] + extraCandies ))
            {
                res[i] = true;
            }else
            {
                res[i] = false;
            }
            
            
        }
        
        return res;


    }


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);


cout<<kidsWithCandies({4,654,6,1,2} , 2);


return 0;
}