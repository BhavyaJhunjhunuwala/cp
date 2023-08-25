#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        ll time=(a/14);
        ll flag=0;
        if(a>=1 && a<=6)
        {
            cout<<"NO"<<endl;
        }
        else{
        for(int j=1; j<=6; j++)
        {
         if(a-(14*time+j)==0)
         {
            flag=1;
         }
        }
        if(flag)
        {
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
        }
    }
    return 0;
}