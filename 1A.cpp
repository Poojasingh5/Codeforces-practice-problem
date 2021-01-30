#include <bits/stdc++.h>
typedef long long  ll;
#define MOD               1000000007
#define mp                   make_pair
#define pb                    push_back
#define Size(a)            int((a).size())
#define F                     first
#define S                     second
using namespace std;

int main()
{
    ll t;
    t=1;
  while(t--)
  {
      
     double n,m,k;
     cin>>n>>m>>k;
     cout<<ll(ceil(n/k))*ll(ceil(m/k));
  }
  return 0;

}
