///****Bismillahir Rahmanir Rahim*****///
///** AR_ASIF(Asifur Rahman),MBSTU **///
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define ll long long
#define mp make_pair
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<ll> vi;
typedef vector<st> vs;
typedef map<ll,ll> mii;
typedef map<string,ll> msi;
typedef set<ll> si;
typedef set<string> ss;
typedef pair<ll,ll> pii;
typedef vector<pii> vpii;
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);}

///compare sort--------------------------------------------
struct data{
    ll a,b;
};
data p[100];
bool cmp(data f,data s){
    if(f.a!=s.a)
        return f.a<s.a;
    return f.b<s.b;
}
///Power Set-----------------------------------------------
void PowerSet(ll a[], int set_size)
{
    ll pow_set_size = 1<<set_size;
    for(ll counter = 0; counter < pow_set_size; counter++)
    {
      for(ll j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
          {
              //next Process
          }
       }
    }
}
///Prime Seive----------------------------------------------
#define Mx 1000005
vector<ll>P;
ll prime[Mx];
void seive()
{
    ll i,j;
    for(i=4; i<=Mx; i+=2)prime[i]=1;
    for(i=3; i*i<=Mx; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*2; j<=Mx; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    P.push_back(2);
    for(i=3; i<=Mx; i+=2)
    {
        if(prime[i]==0)P.push_back(i);
    }
}
///-------------------------------------The End----------------------------------------------

bool vis[100005];
vector<ll>G[100005];
ll cnt;
void dfs(ll u){
    vis[u]=1;
    for(ll i=0;i<G[u].size();i++){
        ll v=G[u][i];
        if(vis[v]==0){
            cnt++;
            dfs(v);
        }
    }
}
int main()
{
    ll i,j,n,m,ans;
    while(scanf("%lld %lld",&n,&m)==2){
            ll u,v,src;
            for(i=0;i<m;i++){
                scanf("%lld %lld",&u,&v);
                G[u].pb(v);
                G[v].pb(u);
            }
            cnt=0;
            scanf("%lld",&src);
            dfs(src);
            //cout<<cnt<<endl;
        cout<<(n-cnt-1)<<endl;
    }
    return 0;
}
