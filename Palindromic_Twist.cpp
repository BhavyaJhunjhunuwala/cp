#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        string str;
        cin>>str;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            v[i]=str[i]-'a';
        }
        vector<int> ans(n/2);
        for(int i=0; i<n/2; i++)
        {
            ans[i]=abs(v[i]-v[n-i-1]);
        }       
        int flag=0;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]>2)
            {
                flag=1;
            }
            else if(ans[i]==1)
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}