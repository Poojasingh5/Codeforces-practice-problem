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
       ll m=-1;
       double sum=0;
       cin>>n;
      ll a[n];
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           sum=sum+a[i];
           m=max(m,a[i]);
       }
       ll p= (ceil(sum/(n-1)));

     m=max(m,p); ll ans=(n-1)*m -sum;
       cout<<ans<<endl;


    }
    return 0;
}
