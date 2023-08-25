#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,x,y,z;
        cin>>a>>b>>c;
        z=pow(10,c-1);
        x=z,y=z;
        while(to_string(x).size()<a) x=x*2;
        while(to_string(y).size()<b) y=y*3;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}