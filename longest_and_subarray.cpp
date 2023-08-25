
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;

void soloution()
{
     //int n;
     //cin>>n;
     int rect1[4];
     int sum=0;
     for(int i=0; i<4; ++i)
     {
        cin>>rect1[i];
     } 
     int rect2[4];
     for(int i=0; i<4; ++i)
     {
        cin>>rect2[i];
     } 
     if(rect2[0]-rect1[2]<0)
     {
        
        int len1=rect1[2]-rect1[0];
        int bre1=rect1[3]-rect1[1];
        int sum=len1*bre1;
        int len2=rect2[2]-rect2[0];
        int bre2=rect2[3]-rect2[1];
        sum=sum+len2*bre2;
        int extrlen=rect1[2]-rect2[0];
        int extrbre=rect1[3]-rect2[1];
        sum=sum-extrlen*extrbre;
        cout<<sum<<"\n";
     }
     else
     { 
        int len1=rect1[2]-rect1[0];
        int bre1=rect1[3]-rect1[1];
        int sum=len1*bre1;
        int len2=rect2[2]-rect2[0];
        int bre2=rect2[3]-rect2[1];
        sum+=len2*bre2;
        cout<<sum<<"\n";
     }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll t;
   cin>>t;
    while(t--)
    {
       soloution();
    }
    return 0;
}
