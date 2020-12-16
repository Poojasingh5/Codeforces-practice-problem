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
	    ll a[27]={0},b[27]={0};
	    ll n,m;
	    cin>>n>>m;
	    string s,ss;
	    cin>>s>>ss;
	    for(ll i=0;i<n;i++)
	    {
	         a[s[i]-'a']++;
	    }
	    for(ll j=0;j<n;j++)
	    {
	         b[ss[j]-'a']++;
	    }
	    ll flag=0;
	    for(ll i=0;i<26;i++)
	    {
	        if(a[i] < b[i] || (a[i] -= b[i]) % m)
                flag=1;
            a[i+1] += a[i];
	    }
	    if(flag==1)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;

	}

	return 0;
}
