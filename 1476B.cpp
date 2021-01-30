Question link : https://codeforces.com/contest/1476/problem/B

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
        cin>>n;
        cin>>k;
        ll a[n];
        ll sum;
        
        for(ll i=0;i<n;i++)
        {
             cin>>a[i];
           
          
        }
        sum=a[0];
        ll count=0;
        ll ans=0,anss=0;
        for(ll i=1;i<n;i++)
        {
            
             if(a[i]*100>sum*k)
             {
                  ans=(a[i]*100-sum*k);
                  if(ans%k==0)
                  {
                       count=ans/k;
                  }
                  else
                  {
                       count=(ans/k)+1;
                  }
                  anss=anss+count;
                  sum=sum+count;
             }
             sum=sum+a[i];
        }
        cout<<anss<<ln;
        
	    
	}
	
	return 0;
}
