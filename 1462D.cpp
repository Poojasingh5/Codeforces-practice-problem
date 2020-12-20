// ****************  DON'T KNOW HOW TO CODE :) *********************//
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int  ll;
#define MOD     1000000007
#define mp      make_pair
#define pb        push_back
#define F            first
#define S           second
#define f(a,b,i)     for(ll i=a;i<b;i++)
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
	    ll a[n];
	    ll sum=0;
	    for(ll i=0;i<n;i++)
	    {
	         cin>>a[i];
	         sum=sum+a[i];
	    }
	    for(ll i=n;i>=1;i--)
	    {
	         if(sum%i==0)
	         {
	            ll x=(sum/i) ;
	            ll y=0;
	            ll flag=1;
	            for(ll j=0;j<n;j++)
	            {
	                 y=y+a[j];
	                 if(y>x)
	                 {
	                      flag=0;
	                      break;
	                 }
	                 else if(x==y)
	                 {
	                      y=0;
	                 }
	            }
	         
	         if(flag==1)
	         {
	              cout<<n-i<<endl;
	              break;
	         }
	    }
	    }
	    
	}
	
	return 0;
}
