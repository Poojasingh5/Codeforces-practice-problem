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
         ll a[n];
        
         ll x=-1,y=1;
         ll flag=0;
         for(ll i=0;i<n;i++)
         {
              cin>>a[i];
              
              if(i>0)
             {  y=max(y,abs(a[i]-a[i-1]));
               //cout<<abs(a[i]-a[i-1])<<" ";
             }
         }
           
        
       for(ll i=1;i<n;i++)
        {
        	if(y!=1 and abs(a[i]-a[i-1])==1)
        	{
        		if((a[i]-1)/y != (a[i-1]-1)/y)
        		{
        		     flag=1;
        		     cout<<"NO"<<ln;
        		     break;
        		     
        		}
        	}
        	else if(abs(a[i-1]-a[i])!=y)
        	{
        	     flag=1;
        		cout<<"NO"<<ln;
        	      break;
        	}
        }
        if(flag==0)
                cout <<"YES"<<ln<<1000000000<<" "<<y<<ln;
        
	    
	}
	
	return 0;
}
