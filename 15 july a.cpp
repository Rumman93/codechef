#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long int t;
cin>>t;
while(t--)
{
long long int n,m,x,k,d,i,index,flag=0,count=0,result,odd,even,sum=0,temp;
cin>>n;
//string str;
//string str;
long long int a[200005];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{

    if(a[i]%2==0)
    {
        flag=1;
        break;
    }
}
if(flag==1)
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
}

}
    return 0;
}
