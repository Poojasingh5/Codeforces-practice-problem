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
#define min_heap    priority_queue<ll,vector<ll>,greater<ll>>
#define max_heap     priority_queue<ll>
void code() 
{
   ll n;
   cin>>n;
   map<ll,ll>m;
   vector<ll>v,w;
   for(ll i=0;i<n;i++)
   {
        ll x;
        cin>>x;
        m[x]++;
        if(m[x]>1)
        w.pb(x);
        else
        v.pb(x);
   }
   sort(v.begin(),v.end());
   for(ll i=0;i<v.size();i++)
   {
        cout<<v[i]<<" ";
   }
   for(ll j=0;j<w.size();j++)
   {
        cout<<w[j]<<" ";
   }
   cout<<ln;
}
int main() 
{
    FAST;
	ll t;
	t=1;
	cin>>t;
	while(t--)
	{
	     code();
	}
	
	return 0;
}
