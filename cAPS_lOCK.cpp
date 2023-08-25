#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    string st=str;
    string ans="";
    int count=0;
    for(int i=0; i<str.length(); i++)
    {
        if(islower(str[i]))
        {
                count++;    
        }
    }
    if(count==1)
    {
        if(islower(str[0]))
        {
        for(int i=0; i<str.length(); i++)
        {
            ans+=tolower(str[i]);
        }
            ans[0]=toupper(str[0]);
            cout<<ans<<endl;
        }
        else{
            cout<<st<<endl;
    
            return 0;
        }
    }
    else{
        if(count==0)
            {
                string ans1="";
            for(int i=0; i<str.length(); i++)
             {
                ans1+=tolower(str[i]);
             }
            cout<<ans1<<endl;  
            }
            else
            {   
            cout<<st<<endl;
            }
    }
    return 0;
}