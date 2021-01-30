link: https://codeforces.com/contest/954/problem/A

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
         string s,a,b;
         cin>>s;
         ll count=0;
          for(ll i=0;i<n-1;i++)
          {
               if(s[i]=='R' &&s[i+1]=='U' || (s[i]=='U'&& s[i+1]=='R'))
               {
                    count++;
                    s[i]='D';
                    s[i+1]='D';
               }
          }
	    cout<<n-count;
	}
	
	return 0;
}
