
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
long long int n,m,x,k,d,i,index,flag,count=0,result,odd,even,sum=0,temp;
long long int a[100000];
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n-1;i++)
{
    sum=sum+((abs(a[i+1]-a[i]))-1);
}
cout<<sum<<endl;

}
    return 0;
}
