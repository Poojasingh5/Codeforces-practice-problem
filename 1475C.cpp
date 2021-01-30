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
            ll m,n,k;
            cin>>n>>m>>k;
           
    ll a[k],b[k];
    ll count[n+1]={0},cb[m+1]={0};
  
    for(ll i=0;i<k;i++)
    {
        cin>>a[i];
        count[a[i]]++;
    }
    
    for(ll i=0;i<k;i++)
    {
        cin>>b[i];
        cb[b[i]]++;
    }
    
    ll ans=0;
    for(ll i=0;i<k;i++)
    {
        ans=ans+(k-(cb[b[i]]+count[a[i]]-1));
    }
    cout<<ans/2<<ln;
	}
	
	return 0;
}
