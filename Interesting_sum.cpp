
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;

int soloution()
{
    int length;
    cin>>length;
    vector<int> array(length);
    for(int i=0; i<length; i++)
    {
        
        cin>>array[i];
        
    }  
    sort(array.begin(),array.end());
    
    return array[length-1]+array[length-2]-array[0]-array[1];
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
    int ans=soloution();  
    cout<<ans<<endl; 
    }
    return 0;
}



