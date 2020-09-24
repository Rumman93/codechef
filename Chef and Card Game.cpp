#include<bits/stdc++.h>
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
//long long int a[20000],b[20000];
/*for(i=0;i<n;i++)
{
    cin>>a[i];
}
*/
cin>>n;
while(n--)
{
    long long int chef,moto,cvalue=0,mvalue=0;
    cin>>chef>>moto;
    while(chef)
    {
        cvalue=cvalue+(chef%10);
        chef=chef/10;

    }
    while(moto)
    {
        mvalue=mvalue+(moto%10);
        moto=moto/10;
    }
    if(cvalue>mvalue)
    {
        count++;
    }
    else if(mvalue>cvalue)
    {
        sum++;
    }
    else
        {
        count++;
        sum++;
        }
}
if(count>sum)
{
    cout<<0<<" "<<count<<endl;
}
else if(sum>count)
{
    cout<<1<<" "<<sum<<endl;
}
else
{
    cout<<2<<" "<<count<<endl;
}

}
return 0;
}
