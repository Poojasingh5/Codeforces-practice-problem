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
           ll x,flag=0;;
           cin>>x;
           for(ll i=0;i*2020<=x;i++)
           {
                if((x-(i*2020))%2021==0)
                {
                     flag=1;
                     cout<<"YES"<<ln;
                     break;
                }
           }
           if(flag==0)
           {
                cout<<"NO"<<ln;
           }
  
       
    } 
           
	
	
	return 0;
}
