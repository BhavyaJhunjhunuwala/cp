#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin>>input;
    char first=input[0];
    char second=input[1];
    string str[5];
    for(int i=0; i<5; i++)
    {
        cin>>str[i];
    }
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
    for(int i=0; i<5; i++)
    {
        mp1[str[i][0]]++;
        mp2[str[i][1]]++;
    }
    int flag=0;
    for(auto it=mp1.begin(); it!=mp1.end(); it++)
    {
       if(mp1.find(first)!=mp1.end())
       {
        flag=1;
       }
    }

    for(auto it=mp2.begin(); it!=mp2.end(); it++)
    {
       if(mp2.find(second)!=mp2.end())
       {
        flag=1;
       }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
        }
    return 0;
}