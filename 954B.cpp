QUESTION LINK : https://codeforces.com/contest/954/problem/B

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
//	cin>>t;
	while(t--)
	{
            ll n;
            cin>>n;
            string s;
            cin>>s;
            ll count=0,ans=n,k=0,flag=0;
            for(ll i=n/2 -1;i>=0;i--)
            {
                 string c=s.substr(0,i+1);
                
                 flag=0;
                 k=0;
                 for(ll j=i+1;j<=min((2*i+1),n-1);j++)
                 {
                      if(s[j]!=c[k++]) 
                      flag=1;
                 }
                 if(flag==0)
                 {
                     
                      ans=min(ans,i+2+(n-(2*(i+1))));
                      break;
                 }
            }
            cout<<ans<<ln;
	    
	}
	
	return 0;
}
