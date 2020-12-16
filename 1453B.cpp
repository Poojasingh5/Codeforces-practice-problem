#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
  vector<ll>v[200001];


int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int i,j,t;
    cin>>t;
    while(t--)

    {
     ll n;
	cin >> n;
	ll a[n+1];
	for (ll i = 1; i <= n; i++)
		cin >> a[i];

	ll ans = 0;
	for (ll i = 2; i <= n; i++)
		ans += abs(a[i] - a[i - 1]);
 ll y=0;
	ll x = max(abs(a[1] - a[2]), abs(a[n] - a[n - 1]));
	for (ll i = 2; i < n; i++)
	{
	    x = max(x, abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]));
	}
	cout << ans - x <<endl;


    }
    return 0;
}
