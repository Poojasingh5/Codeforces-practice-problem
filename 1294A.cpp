// ****************  DON'T KNOW HOW TO CODE :) *********************//
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
            ll a,b;
            
            cin>>a>>b;
           string s;
           cin>>s;
           n=s.length();
            ll x=-1,y=-1;
            for(ll i=0;i<n;i++)
            {
                 if(s[i]=='1')
                 {
                      x=i;
                      break;
                 }
            }
            for(ll i=n-1;i>=0;i--)
            {
                 if(s[i]=='1')
                 {
                      y=i;
                      break;
                 }
            }
            if(x==y && x==-1)
            cout<<0<<ln;
            else
            {
                 ll ans=a;
                 ll count=0;
                 for(ll i=x;i<=y;i++)
                 {
                      count=0;
                      while(s[i]=='0')
                      {
                           count++;
                           i++;
                      }
                      ans=ans+(min(a,b*count));
                 }
                 cout<<ans<<ln;
            }
	    
	}
	
	return 0;
}
