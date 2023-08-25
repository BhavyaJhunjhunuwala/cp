#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,v,flag=0,first=-1,last=-1;
        cin>>n;
        while(n--)
        {
            cin>>v;
            if(flag)
            {
                if(v>=last && v<=first)
                {
                    last=v;
                    cout<<1;
                }else{
                    cout<<0;
                }
            }
            else{
                if(first==-1)
                {
                    first=v;
                    last=v;
                    cout<<1;
                }
                else if(v>=last){
                    last=v;
                    cout<<1;
                }
                else if(first>=v)
                {
                    flag=1;
                    cout<<1;
                    last=v;
                }else{
                    cout<<0;
                }
            }
        }
       cout<<endl;
    }
    return 0;
}