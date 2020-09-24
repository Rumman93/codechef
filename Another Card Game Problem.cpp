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
ll a,b,chef,rick;
cin>>a>>b;

if(a%9==0)   chef=a/9;
else chef=a/9+ 1;
if(b%9==0)   rick=b/9;
else rick=b/9+1;
if(chef<rick) cout<<0<<" "<<chef<<endl;
else if(rick<chef) cout<<1<<" "<<rick<<endl;
else cout<<1<<" "<<rick<<endl;

}
return 0;
}
