#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            v[i]=i+1;
        }
        vector<int> ans;
        while(v.size()>1)
        {
            int i=v.size();
            int res=v[i-1]+v[i-2];
            ans.push_back(v[i-1]);
            ans.push_back(v[i-2]);
            v.pop_back();
            v.pop_back();
            if(res%2==1)
            {
                v.push_back((res/2)+1);
            }
            else
            {
                 v.push_back((res)/2);
            }
        }
        cout<<v[0]<<endl;
        for(int i=0; i<ans.size()-1; i=i+2)
        {
            cout<<ans[i]<<" "<<ans[i+1]<<endl;
        }
    }
    
    return 0;
}