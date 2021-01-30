//poojasingh
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int  ll;
#define MOD     1000000007
#define mp      make_pair
#define pb        push_back
#define f           first
#define s          second
#define ln "\n"

int main() 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
	ll t;
	t=1;
	cin>>t;
	while(t--)
	{
            
	    ll n;
	    cin>>n;
	    ll x=0,y=0;
	    for(ll i=0;i<n;i++)
	    {
	         ll a;
	         cin>>a;
	         if(a==0)x++;
	         else y++;
	    }
	    if(x>=(n/2))
	    {
	         cout<<x<<ln;
	         for(ll i=0;i<x;i++)
	         {
	              cout<<0<<" ";
	         }
	    }
	    else
	    {
	         y=y-y%2;
	         cout<<y<<ln;
	          for(ll i=0;i<y;i++)
	         {
	              cout<<1<<" ";
	         }
	    }
	    cout<<ln;
	}
	
	return 0;
}
