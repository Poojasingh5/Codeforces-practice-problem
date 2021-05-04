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
 
void code() 
{
     ll n;
     cin>>n;
     ll a[n]={0};
     ll x=1,y=0;
     for(ll i=1;i<n;i++)
     {
           if(__gcd(n,i)==1)
            {
                x=x*i;
                x%=n;
                a[i]=1;
                y++;
            }
     }
     
     
        if(x%n!=1)
        {
           a[x%n]=0;
           y--;
        }
        cout<<y<<ln;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=0)
            cout<<i<<" ";
        }
        cout<<ln;
}
int main() 
{
    FAST;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
	     code();
	}
	
	return 0;
}
