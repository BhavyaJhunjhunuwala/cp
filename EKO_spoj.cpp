#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6+10;
	 ll n,m;
	 long long v[N];
bool iswoodsuff(ll h)
{
	ll wood=0;
	for(int i=0; i<n; i++)
	{
		if(v[i]>=h)
		{
			wood+=(v[i]-h);
		}
	}
	if(wood>=m) return true;
	return false;
}

int main() {
	 cin>>n>>m;
	 for(ll i=0; i<n; ++i)
	 {
	 	cin>>v[i];
	 }
	 ll low=0, high=1e9, mid;
	 while(high-low>1)
	 {
		 mid=(low+high)/2;
	 	if(iswoodsuff(mid))
	 	{
	 		low=mid;
	 	}
	 	else{
	 		high=mid-1;
	 	}
	 }
	 if(iswoodsuff(high))
	 {
	 	cout<<high<<endl;
	 }
	 else{
	 	cout<<low<<endl;
	 }
	return 0;
}