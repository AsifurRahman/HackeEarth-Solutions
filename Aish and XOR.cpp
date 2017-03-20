#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mx 1000002
ll sum[Mx];
int main()
{
    ll i,n,q,x;
    cin>>n;
    sum[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        sum[i]+=sum[i-1]+x;

    }
    cin>>q;
    ll cnt,v,l,r;
    for(i=1; i<=q; i++)
    {
        cin>>l>>r;
        v=sum[r]-sum[l-1];
        cout<<((v%2==0)?"0 ":"1 ");
        cnt=r-l+1-v;
        cout<<cnt<<endl;
    }
    return 0;
}

