#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[100005],i,n,k,count=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]+=k;
            if(a[i]%7==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
