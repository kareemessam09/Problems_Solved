#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();

ll t;
  cin>> t;
 
  while(t--){
    ll n, k, q;
    cin>> n>> k>>q;
 
    vector <double> distance, time, speed;
    distance.push_back(0);
    time.push_back(0);
     
    for (int i=0 ;i<k; i++){
      ll d;
      cin>> d;
      distance.push_back(d);
    }
        for (int i=0 ;i<k; i++){
            int d;
            cin>> d;
            time.push_back(d);
            }
        
    for (int i=1 ;i<=k; i++){
      if(time[i] != time[i-1]) {
        double speed1= (distance[i] - distance[i-1]) / (time[i] - time[i-1]);
        speed.push_back (speed1);
      }
    }
 
    while( q-- ){
      ll x;
      cin>> x;
      double ans=0;
        for( ll i=1; i< distance.size() ;i++ ){
                if( distance[i]<= x ){
                ans+= (distance[i] - distance[i-1])/ speed[i-1];
                }
                else {
                ans+= (x - distance[i-1])/ speed[i-1];
                break;
                }
            }
            cout<< (ll) floor (ans)<<" ";
            }
            cout<<endl;
        }


return 0;
}