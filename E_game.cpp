#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin >> n;

priority_queue<long long> pq;
while (n--)
{
    long long a;
    cin>>a;
    pq.push(-a);
    long long t = -1 * pq.top();
    pq.pop();
    t*=5;
    pq.push(-t);
    

}
long long sum=0;
while (not pq.empty())
{
    sum += -1 * pq.top();
    pq.pop();
}

cout<<sum;



return 0;
}