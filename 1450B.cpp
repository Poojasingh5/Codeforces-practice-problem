#include "bits/stdc++.h"
using namespace std;
typedef  int ll;

int main() {
	// your code goes here

	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y;
	    cin>>x>>y;
	    vector<pair<ll,ll>>v,u;
	    for(ll i=0;i<x;i++)
	    {
	        ll n,m;
	        cin>>n>>m;

	        v.push_back(make_pair(n,m));
	    }

		int ans = -1;
		for (int i = 0; i < x; ++i)
		{
			int mx = 0;
			for (int j = 0; j < x; ++j)
			{
				mx = max(mx, abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second));
			}
			if (mx <= y) ans = 1;
		}
		cout << ans << "\n";
	}
	return 0;
}
