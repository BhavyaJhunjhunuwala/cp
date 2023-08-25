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
        ll num;
        cin>>num;
        ll sum=num;
        while(num>0)
        {
            num=num/2;
            sum+=num;
        }
        cout<<sum<<endl;
    }
    return 0;
}