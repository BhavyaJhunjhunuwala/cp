#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b,s;
    cin>>a>>b>>s;
    if(abs(a)+abs(b)>s)
    {
        cout<<"NO"<<endl;
    }
    else{
        if((s-abs(a)-abs(b))%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}