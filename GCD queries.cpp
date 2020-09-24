#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a[200005],i,j,k,q;
        cin>>n>>q;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll b[200006],c[200006];
        b[0]=0;
        c[n+1]=0;
        for(i=1;i<=n;i++)
        {
            b[i]=gcd(a[i],b[i-1]);
        }
        for(i=n;i>=1;i--)
        {
            c[i]=gcd(a[i],c[i+1]);
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll fina=gcd(b[l-1],c[r+1]);
            cout<<fina<<endl;
        }


    }
    return 0;
}
