#include <bits/stdc++.h>
using namespace std;

typedef long long int  ll;
#define MOD               1000000007
#define mp                   make_pair
#define pb                    push_back
#define F                   first
#define S                   second
#define f(a,b,i)             for(ll i=a;i<b;i++)
int main()
{
	ll t;
	t=1;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    ll a;
	    ll count=0;
	    ll mn=1000000007;
	    ll sum=0;
	    for(ll i=0;i<n*m;i++)
	    {

	         {
	              cin>>a;
	              if(a<0)
	              count++;
	              mn=min(mn,abs(a));
	              sum=sum+abs(a);
	         }
	    }
		


	 if(count%2!=0)
	    sum=sum- 2*mn;
	    cout<<sum<<endl;
	}

	return 0;
}
