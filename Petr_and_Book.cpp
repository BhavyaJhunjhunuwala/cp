#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<int> v(7);
    for(int i=0; i<7; i++)
    {
        cin>>v[i];
    }
    int sum=0;
    int ans;
    int i=0;
    while(i<7)
    {   
        sum+=v[i];
        if(sum>=t)
        {
            ans=i+1;
            break;
        }
        if(i==6)
        {
            i=-1;
        }  
        i++;
    }
    cout<<ans<<endl;

    return 0;
 }