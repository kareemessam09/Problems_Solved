#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define isEven(n) (n % 2 ==0)

int arr[100001];
vector<int> v;

int main() {
KemOn09();

int n;
cin >> n;
int gg = n;
double dis = 0;
while (n--)
{
   int num;
   cin>>num;
   dis+=num;

}
double g = dis/gg;
printf("%.12f",g);





return 0;
}