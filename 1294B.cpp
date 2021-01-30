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
           vector<pair<ll,ll>>v;
           for(ll i=0;i<n;i++)
           {
                ll x,y;
                cin>>x>>y;
                v.pb(mp(x,y));
           }
           ll flag=0;
           sort(v.begin(),v.end());
           ll x=0,y=0;
           string s;
           for(ll i=0;i<n;i++)
           {
                
                ll u=v[i].f-x,r=v[i].s-y;
                if(u<0 || r<0)
                {
                     cout<<"NO"<<ln;
                     flag=1;
                     break;
                }
                else
                {
                     for(ll j=0;j<u;j++)
                     {
                          s=s+'R';
                     }
                     x=v[i].f;
                     for(ll j=0;j<r;j++)
                     {
                          s=s+'U';
                     }
                     y=v[i].s;
                }
                
                
           }
           if(flag==0)
           cout<<"YES"<<ln<<s<<ln;
           
	    
	}
	
	return 0;
}
