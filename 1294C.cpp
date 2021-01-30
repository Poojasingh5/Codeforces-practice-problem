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
          vector<ll>v;
          for(ll i=2;i*i<=n;i++)
          {
          
                    while(n%i==0)
                    {
                         v.pb(i);
                         n=n/i;
                    }
               
          }
           if(n!=1)
           v.pb(n);
           
           ll a=1,b=1,c=1;
           for(ll i=0;i<v.size();i++)
           {
                if(a==1)
                {
                     a=a*v[i];
                }
                else if(b==1 || b==a)
                {
                     b=b*v[i];
                }
                else 
                {
                     c=c*v[i];
                }
           }
  
      if(a==1 ||b==1 || c==1 || a==b || b==c || c==a)
      cout<<"NO"<<ln;
      else
      {
           cout<<"YES"<<ln<<a<<" "<<b<<" "<<c<<ln;
      }
       
    } 
	    
	
	
	return 0;
}
