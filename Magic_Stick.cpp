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
        ll x,y;
        cin>>x>>y;
        if(y<=x)
        {
            cout<<"YES"<<endl;
        }
        else{
            if(x==1)
            {
                cout<<"NO"<<endl;
            }
            else{
                
                while(x<y && x!=3)
                {
                    if(x%2) x--;
                    x/=2;
                    x*=3;
                }
            
            if(x>=y)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            }

        }
    }
    return 0;
}