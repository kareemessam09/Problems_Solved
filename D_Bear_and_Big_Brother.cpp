#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int x = 121;
int reversed = 0;
int temp = x;

        while(temp > 0){
            int t = temp %10; // 1
            reversed  = reversed * 10  + t; 
            temp/=10;
        }

        cout<<x << " "<<reversed;


return 0;
}