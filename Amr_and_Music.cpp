#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<pair<int,int>> v1;
    for(int i=0; i<n; i++)
    {
        pair<int,int> p;
        p={v[i],i+1};
        v1.push_back(p);
    }
    sort(v1.begin(),v1.end());
    vector<int> ans;
    int count=0;
    for(int i=0; i<v1.size(); i++)
    {
        if(k-v1[i].first>=0)
        {
            k=k-v1[i].first;
            count++;
            ans.push_back(v1[i].second);
        }
    }
    cout<<count<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}