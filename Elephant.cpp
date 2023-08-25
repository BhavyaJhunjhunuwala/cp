#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x;
    cin>>x;
    ll count=0;
    ll res;
    res=x%5;
    if(res==0)
    {   
        res=x-res%5;
        count+=res/5;
    }
    else{
        res=x-res%5;
        count++;
        count+=res/5;
    }
    cout<<count<<endl;
    return 0;
}