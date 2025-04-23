#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

bool canPlaceFlowers(vector<int>& ff, int n) {
        int c = 0;

        for (size_t i = 0; i < ff.size(); i++)
        {
            if (ff[i] == 0)
            {
                bool left = (i == 0) || (ff[i-1] == 0);
                bool right = (i == ff.size()-1) || (ff[i+1] == 0);
                if (left&&right)
                {
                    ff[i] = 1;
                    c++;
                    if (c >= n) {
                        return true;
                    }
                }
                
            }
            
            
        }

        return c >= n;
        


    }


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);





return 0;
}