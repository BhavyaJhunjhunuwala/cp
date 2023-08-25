#include<bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin>>n;
    unordered_map<int,int> mp;
    int size=1+log10(n);
    if(size==1)
    {
       cout<<"NO"<<endl;
    }
    else
    {
    while(n>0)
    {
        int digit=n%10;
        mp[digit]++;
        n=n/10;
    }
    int count=0;
    unordered_map<int,int> mp2;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
            if(it->first==4 || it->first==7)
            {
                count+=it->second;
            }
    }
        if(count==4 || count==7)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}