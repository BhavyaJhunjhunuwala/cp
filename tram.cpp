#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> exit(n),entry(n);
    for(int i=0; i<n; i++)
    {
        cin>>exit[i]>>entry[i];
    }
    vector<int> result(n);
    result[0]=entry[0];
    for(int i=1; i<n; i++)
    {   
        result[i]=result[i-1]-exit[i]+entry[i];
    }   
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxi=max(maxi,result[i]);
    }
    cout<<maxi<<endl;
    return 0;
}