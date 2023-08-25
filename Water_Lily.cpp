#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double h,l;
    cin>>h>>l;
    cout<<setprecision(13)<<(l*l-h*h)/(2*h)<<endl;
    return 0;
}