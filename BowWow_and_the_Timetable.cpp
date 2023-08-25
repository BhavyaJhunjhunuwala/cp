#include<iomanip>
#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
 int main()
 {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin>>str;
    ll cnt=0;
    ll n=str.size();
    ll res=n/2;
    if(n%2==0)
    {
        cout<<res<<endl;
    }
    else{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
        {
            cnt++;
        }
    }
    res+=(cnt>1);
    cout<<res<<endl;
    }
    return 0;
 }