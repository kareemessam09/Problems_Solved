#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define mx 100000
#define all(x) (x).begin(), (x).end()
#define isEven(n) (n % 2 ==0)

void walk(int steps);
void recursiveWalk(int steps);
int factorial(int n);


int main() {

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n;
cin >> n;

//walk(n);
//recursiveWalk(n);
cout<<factorial(n);

return 0;
}


void walk(int steps){
    for(int i = 0 ; i < steps ; i++){
        cout<<"Walk bitch! \n";
    }
}

void recursiveWalk(int steps){
    if(steps > 0){
        cout<<"Walk Bitch! \n";
        recursiveWalk(steps - 1);
    }
}

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial (n-1);
}
