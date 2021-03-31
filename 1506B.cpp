https://codeforces.com/problemset/problem/1506/B

//singhpooja
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
           
	   ll n,m;
	   cin>>n>>m;
	   string s;
	   cin>>s;
	   ll ans=0;
	   ll k,l;
	   for(ll i=0;i<n;i++)
	   {
	       if(s[i]=='*')
	       {
	           k=i;
	           break;
	       }
	   }
	     for(ll i=n-1;i>=0;i--)
	   {
	       if(s[i]=='*')
	       {
	           l=i;
	           break;
	       }
	   }
	   if(k==l)
	   ans=1;
	   else
	   ans=2;
	   ll pre=k;
	   ll next=k+m;
	  while(next<l)
	  {
	      if(s[next]=='*')
	      {
	          ans++;
	          s[next]='X';
	          pre=next;
	          next=next+m;
	      }
	      else
	      {
	          next--;
	      }
	      if(next<=k)
	      break;
	  }
	  
	   cout<<ans<<ln;
	    
	}
	
	return 0;
}
