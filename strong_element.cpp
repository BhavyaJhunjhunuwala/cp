
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;

int gcdfun (int a , int b)
{
    return __gcd(a,b);
}
void soloution()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }  
   int prevgcdans=arr[0];
   for(int i=0; i<n; i++)
   {
      prevgcdans=gcdfun(arr[i],prevgcdans);
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







/*#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    stack<int> s;
    s.push(n);
    cout<<"number="<<s.top();
	return 0;
} */