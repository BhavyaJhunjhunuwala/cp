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
    unordered_map<char,int> mp;
    mp['A']=1;
    mp['B']=10;
    mp['C']=100;
    mp['D']=1000;
    mp['E']=10000;
    string str,str1;
    cin>>str;
    str1=str;
    ll n=str.size();
    ll ans1=0,ans2=0;
    int found=str1.find('E');
    if(found!=string::npos)
    {
        if(found==0)
        {
            str1[1]='E';
        }else{
            str1[found-1]='E';
        }
         ans2=mp[str1[n-1]];
    char mini=str1[n-1];
    for(ll i=n-2; i>=0; i--)
    {
        if(str1[i]>=mini)
        {
        ans2+=mp[str1[i]];
        mini=max(str1[i],mini);
        }else{
            ans2=ans2-mp[str1[i]];
        }
    }
    }
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]<'E')
        {
            str[i]='E';
            break;
        }
    }
     ans1=mp[str[n-1]];
    char mini=str[n-1];
    for(ll i=n-2; i>=0; i--)
    {
        if(str[i]>=mini)
        {
        ans1+=mp[str[i]];
        mini=max(str[i],mini);
        }else{
            ans1=ans1-mp[str[i]];
        }
    }
    
    cout<<max(ans1,ans2)<<endl;
    
    }
    return 0;
}