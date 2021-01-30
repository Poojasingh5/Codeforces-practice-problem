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
            if(n%2==1)
            cout<<"YES"<<ln;
            else
            {
                 ll flag=0;
                 while(1)
                 {
                      n=n/2;
                      if(n%2==1 && n>1)
                      {
                           cout<<"YES"<<ln;
                           flag=1;
                           break;
                      }
                      if(n<=1)
                      break;
                 }
                 if(flag==0)
                 cout<<"NO"<<ln;
            }
	    
	}
	
	return 0;
}
