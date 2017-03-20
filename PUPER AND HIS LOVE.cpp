#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mx 2600007
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
int main()
{
    ll i,n,q;
    string s;
    seive();
    cin>>q;
    while(q--)
    {
        cin>>n;
        cin>>s;
        ll res=0;
        for(i=0; i<n; i++)
        {
            res+=s[i]-'a'+1;
        }
        //cout<<res<<endl;
        if(binary_search(P.begin(),P.end(),res))
            cout<<"seen\n";
        else
            cout<<"unseen\n";
    }
    return 0;
}
