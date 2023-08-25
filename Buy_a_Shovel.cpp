#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k,r;
    cin>>k>>r;
    ll val1=INT_MAX,val2=INT_MAX;
    ll mini=INT_MAX;
    for(int i=1; i<10; i++)
    {
        if((k*i)%10==0)
        {
            val1=i;
        }
        else if((k*i-r)%10==0)
        {
            val2=i;
        }
        mini=min(mini,min(val1,val2));
    }
    cout<<mini<<endl;
    return 0;
}