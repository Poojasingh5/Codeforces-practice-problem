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
	     ll d;
	     cin>>d;
	   for(ll i=0;i<n;i++)
	   {
	        ll x;
	        cin>>x;
	        if(x%d==0)
	        cout<<"YES"<<ln;
	        else
	        {
	             ll flag=0;
                ll y=x/d;
                y=d*y;
                ll z=x-y;
                if(z==0)
                cout<<"YES"<<ln;
                else
                {
                     while(y>0)
                     {
                          y=y-d;
                          z=z+d;
                          ll m=z;
                          while(m)
                          {
                               if(m%10==d)
                               {
                                    flag=1;
                                    cout<<"YES"<<ln;
                                    break;
                               }
                               m=m/10;
                          }
                          if(flag)
                          break;
                     }
                     if(flag==0)
                     cout<<"NO"<<ln;
                }
	        
	         }
	}
	}
	
	return 0;
}
