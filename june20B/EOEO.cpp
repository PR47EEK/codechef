#include<bits/stdc++.h>
using namespace std;
//convention
typedef long long        ll;
typedef vector<int>      vi;
typedef pair<int,int>    ii;
typedef map<string,int>  msi;
typedef set<int>         si;
typedef double           db;
#define rep(i,a,n)       for(int i=a;i<n;i++)
#define per(i,a,n)       for(int i=n-1;i>=a;i--)
#define pb               push_back
#define mp               make_pair
#define all(x)           (x).begin(),(x).end()
#define fi               first
#define se               second
#define sz(x)            ((int)(x).size())
#define endl             "\n"
const ll mod=1000000007;
ll powmod(ll a,ll b)
{
    ll res=1;
    a%=mod;
    assert(b>=0);
    for(; b; b>>=1)
    {
        if(b&1)res=res*a%mod;
        a=a*a%mod;
    }
    return res;
}
ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //enter your code from here
    ll t;
    cin>>t;
    while(t--)
    {
        ll ts;
        cin>>ts;
        if(ts%2!=0)cout<<ts/2<<endl;
        else
        {
          while(ts%2==0)
          ts=ts/2;
          cout<<ts/2<<endl;
        }

    }
    //end your code from here
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.get();
    return 0;
}
