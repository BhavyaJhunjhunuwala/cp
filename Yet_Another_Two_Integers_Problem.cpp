#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,res,count=0;
        cin>>a>>b;
            res=abs(a-b);
            if(res%10==0)
            {
                if(res>=0)
                {
                    count+=res/10;
                }
            }
            else if(res%10!=0)
            {
                count++;
                res=res-res%10;
                if(res>=0)
                {
                    count+=res/10;
                }
            }
        cout<<count<<endl;
        }
    return 0;
    }
