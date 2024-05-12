#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin >> n;
int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
for(int i = 0; i < 14; i++) {
    if(n % arr[i] == 0) {
        cout << "YES";
        return 0;
    }
}
cout << "NO";



return 0;
}