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
        string p;
        string h;
        cin>>p;
        cin>>h;
        if(p.length()>h.length())
        {
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
        sort(p.begin(),p.end());
        for(int i=0; i<=h.length()-p.length(); i++)
        {
            string s=h.substr(i,p.length());
            sort(s.begin(),s.end());
            if(s==p)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}