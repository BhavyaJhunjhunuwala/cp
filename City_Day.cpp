#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=i-1; j>=i-x &&j>=0 &&!flag; j--)
        {
            if(v[j]<=v[i]) flag=true;
        }
        if(flag) continue;
        for(int j=i+1; j<n&& j<=i+y && !flag; j++)
        {
            if(v[j]<=v[i]) flag=true;
        }
        if(!flag)
        {
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}