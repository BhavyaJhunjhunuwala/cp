#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int tt;
    cin>>tt;
    vector<long long> v(tt);
    for(int i=0; i<tt; i++)
    {
        cin>>v[i];
    }

    vector<long long> ans,ans1;
    for(int i=0; i<tt; i++)
    {
        long long x=v[i];
        while(x>0)
        {
            long long digit=x%10;
            ans.push_back(digit);
            x=x/10;
        }
        long long res;
     for(int i=0; i<ans.size(); i++)
    {
         res=ans[i]*pow(10,i)+0.5;
         if(res!=0)
         {
         ans1.push_back(res);
         }
    }
        cout<<ans1.size()<<endl;
    for(int i=0; i<ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    ans.clear();
    ans1.clear();
    cout<<endl;
    }
    return 0;
}