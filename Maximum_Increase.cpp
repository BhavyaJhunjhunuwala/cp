#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int count =1;
    int maxi=INT_MIN;
    if(n==1)
    {
        maxi=1;
    }
    else
    {
    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]>v[i])
        {
            count++;
            maxi=max(maxi,count);
        }
        else
        {
            count=1;
        }
         maxi=max(maxi,count);
    }
    }
    cout<<maxi<<endl;
    return 0;
}