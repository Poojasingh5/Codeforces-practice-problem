QUESTION LINK // https://codeforces.com/contest/1476/problem/A

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
            
	    ll n,k;
	    cin>>n>>k;
	if(n>=k && n%k==0)
	cout<<1<<ln;
	else
	{
	     if(n>k)
	    {
	         while(1)
	         {
	              k=k+k;
	              if(k>=n)
	              break;
	         }
	    }
	    ll ans=(k/n)+1;
	    if(k%n==0)
	    ans=ans-1;
	    cout<<ans<<ln;
	}
	
	    
	}
	
	return 0;
}
