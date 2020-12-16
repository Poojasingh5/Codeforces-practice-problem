#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
  vector<ll>v[200001];

/*ll dfs(ll i,ll n)
{
  if(v[i].size()==1)
  {

      if(v[i][0]==1 || v[i][0]==n)
      return 1;
      else
      return 2;

  }
  else
  {
      //cout<<i<<" "<<v[i].size()<<endl;
      ll ans=0;
      for(ll j=0;j<v[i].size();j++)
      {
         if(j==0)
         {
             if(v[i][j]!=1)
             ans++;

         }

         else
         {
             if(v[i][j]-v[i][j-1]>1)
             ans++;
             if(v[i][j]!=n && j==v[i].size()-1)
             ans++;
         }
      }
      return ans;
  }
}*/

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int i,j,t;
    cin>>t;
    while(t--)

    {

        ll n;
        cin>>n;
        ll a[n+1];
      //set<ll>s;
      vector<ll>u;
      for(ll i=0;i<=n;i++)
      {
          v[i].clear();
      }
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll ans;
        for(ll i=1;i<=n;i++)
        {
            v[a[i]].push_back(i);
        }
        if(n==1)
        cout<<0<<endl;
        else
        {
            for(ll i=1;i<=n;i++)
           {
                if(!v[i].empty())
                  {
                    if(v[i].size()==n)
                    {
                        u.push_back(0);
                          continue;

                    }
                     ans=0;
             if(v[i][0]!=1)
             ans++;
               for(j=0;j<v[i].size()-1;j++)
              {

            if(v[i][j]+1!=v[i][j+1])
            {
                ans++;

            }
            }
        if(v[i][v[i].size()-1]!=n)
        ans++;
        u.push_back(ans);

         }

           }
            if(u.size()>0)
            {
            sort(u.begin(),u.end());
            cout<<u[0]<<endl;
            }
        }


    }
    return 0;
}
