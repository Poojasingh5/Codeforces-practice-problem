https://codeforces.com/problemset/problem/1506/C

//singhpooja
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

int subStr(string a,string b, int m, int n)
{
  
    int dp[m + 1][n + 1];
    int ans=0;
 
 
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
           
            if (i == 0 || j == 0)
                dp[i][j] = 0;
 
            else if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                ans= max(ans,dp[i][j]);
            }
            else
               dp[i][j] = 0;
        }
    }
    return ans;
}
 
int main() 
{
    FAST;
	ll t;
	t=1;
	cin>>t;

	while(t--)
	{
           
	    string a,b;
	    cin>>a>>b;
	    ll n,m;
	    n=a.length();
	    m=b.length();
	  
	   cout<<m+n-2*subStr(a,b, n, m)<<ln;
	    
	}
	
	return 0;
}
