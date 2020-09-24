#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        set<ll> ans;
        for(i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(k%x==0)
            {
                ans.insert(x);
            }
        }
        ll siz=ans.size();
        if(siz==0)   cout<<-1<<endl;
        else
        {
            set<ll>::reverse_iterator rit;
            for(rit=ans.rbegin();rit !=ans.rend();rit++)
            {
                cout<<*rit<<endl;
                break;
            }
        }
    }
    return 0;
}
