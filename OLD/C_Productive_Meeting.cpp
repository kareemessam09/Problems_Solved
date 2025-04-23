#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back



void solve(){
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);

        priority_queue<pair<int,int>> pq;

        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        for (size_t i = 0; i < n; i++)
        {
            if(v[i] > 0){
                pq.push({v[i] , i+1});
            }
        }

        vector<pair<int,int>> talks;

        while (pq.size()>1)
        {
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();

            talks.push_back({a.second,b.second});

            if (a.first > 1)
            {
                pq.push({a.first,a.second});
            }

            if (b.first > 1)
            {
                pq.push({b.first,b.second});
            }

            cout<<talks.size()<<nl;
            for(auto talk:talks){
                cout<<talk.first<<" "<<talk.second<<nl;
            }
        }
    }
}


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

solve();



return 0;
}