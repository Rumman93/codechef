#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
ll n,m,i,j,maxi=0,k;
cin>>n>>k;

ll a[200005];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n-1;i++)
{   ll cnt=0;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            cnt++;
        }
    }
    maxi=max(maxi,cnt+1);
}
cout<<min(maxi*k,maxi+k)<<endl;

}
    return 0;
}

