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
ll h,p,flag=0;
cin>>h>>p;

if(h<=p || (h-p)<=(p/2))
{
    cout<<1<<endl;
}
else
{
    while((h-p)>(p/2) && h !=0 && p!=0)
    {
        h-=p;
        p/=2;
        if((h-p)<=p)
        {
            flag=1;
            break;
        }
        else if(h==0)
        {
            flag=1;
            break;
        }
        else if(p==0)
        {
            flag=5;
            break;
        }
    }
    if(flag==1) cout<<1<<endl;
    else
    cout<<0<<endl;
}
}
    return 0;
}
