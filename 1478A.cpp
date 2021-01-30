link : https://codeforces.com/contest/1478/problem/A

//poojasingh
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int  ll;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD     1000000007
#define mp      make_pair
#define pb        push_back
#define f           first
#define s          second
#define ln "\n"


int main() 
{
    FAST;
	ll t;
	t=1;
	cin>>t;
	while(t--)
	{
	     ll n;
	     cin>>n;
	     ll a[n];
            ll count[101]={0};
	    for(ll i=0;i<n;i++)
	    {
	         cin>>a[i];
	         count[a[i]]++;
	    }
	    sort(count,count+101,greater<ll>());
	    cout<<count[0]<<ln;
	}
	
	return 0;
}
