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
{FAST;

      
	  string s,c,ss;
	 int count=0;
        getline(cin,s);
        getline(cin,c);
        
        count=s.size()-c.size();
        count=abs(count);
        
        ss="";
        for(ll i=0;i<count;i++)
        ss+="0";
        
        if(s.size()<c.size())
        {
            s=ss+s;
        }
        else c=ss+c;
        
    if(s>c) cout<<'>';
        else if(s==c) cout<<'=';
        else cout<<'<';   
	
	
	return 0;
}
