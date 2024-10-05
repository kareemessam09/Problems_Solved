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
while (n--)
{
    string s;
    cin >> s;
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    
    if (h > 12 )
    {
        cout<<setw(2)<<setfill('0')<<h-12<<":"<<setw(2)<<setfill('0')<<m<<" PM"<<endl;
    }
    else if (h == 0)
    {
        cout <<setw(2)<<setfill('0')<< "12:" <<setw(2)<<setfill('0')<< m << " AM" << endl;
    }else if (h == 12 && m != 0)
    {
        cout <<setw(2)<<setfill('0')<< h << ":" <<setw(2)<<setfill('0')<< m << " PM" << endl;
    } else if (h == 12 && m == 0)
    {
        cout <<setw(2)<<setfill('0')<< h << ":" <<setw(2)<<setfill('0')<< m << " PM" << endl;
    }
    else
    {
        cout <<setw(2)<<setfill('0')<< h << ":" <<setw(2)<<setfill('0')<< m << " AM" << endl;
    }

    

}








return 0;
}