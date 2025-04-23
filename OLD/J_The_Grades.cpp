#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

struct grades{
    string s;
    
    int tot,a,b,c,d;
    
};

bool compare(const grades &g1, const grades &g2) {

    if (g1.tot == g2.tot)
    {
        return g1.s < g2.s;
    }
    
    
    return g1.tot > g2.tot;
}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);

int n;
cin >> n;

vector<grades> v(n);

for (size_t i = 0; i < n; i++)
{
    cin>>v[i].s>>v[i].a>>v[i].b>>v[i].c>>v[i].d;
    v[i].tot = v[i].a+v[i].b+v[i].c+v[i].d;
}


    sort(v.begin(), v.end(), compare);


for (size_t i = 0; i < n; i++)
{
    cout<<v[i].s <<" "<< v[i].tot<<" " << v[i].a<<" "<<v[i].b<<" "<<v[i].c<<" "<<v[i].d <<nl;

}








return 0;
}