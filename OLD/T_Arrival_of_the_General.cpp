#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxx 100000
#define all(x) (x).begin(), (x).end()
#define KemOn09() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define isEven(n) (n % 2 ==0)


int main() {
KemOn09();
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
int max = INT_MIN, min = INT_MAX;
int maxIndex = 0, minIndex = 0;
for(int i = 0; i < n; i++) {
    if(arr[i] > max) {
        max = arr[i];
        maxIndex = i;
    }
    if(arr[i] <= min) {
        min = arr[i];
        minIndex = i;
    }
}
int res = 0;
if(maxIndex > minIndex) {
    res = maxIndex + (n - 1 - minIndex) - 1;
} else {
    res = maxIndex + (n - 1 - minIndex);
}
cout << res;





return 0;
}