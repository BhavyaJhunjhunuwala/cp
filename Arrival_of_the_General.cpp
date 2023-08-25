#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int maxpos,minipos;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>maxi)
        {
            maxi=v[i];
            maxpos=i;
        }
        if(v[i]<=mini)
        {
            mini=v[i];
            minipos=i;
        }
    }
    if(minipos<maxpos)
    {
        minipos=(n-1)-minipos;
        cout<<minipos+maxpos-1<<endl;
    }
    else{
        minipos=(n-1)-minipos;
        cout<<minipos+maxpos<<endl;
    }
    
    return 0;
}