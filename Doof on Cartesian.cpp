#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long int t;
scanf("%lld",&t);
while(t--)
{
long long int n,m,k,d,i;
scanf("%lld",&n);
long long int a[200009];
for(i=0;i<n;i++)
{
    scanf("%lld",&a[i]);
}
cin>>k;
while(k--)
{
    long long int x,y,count=0,flag=0,hell;
    scanf("%lld%lld",&x,&y);
    if(((x+y)==0) ||((x+y)<a[0]))
        printf("0\n");
    else if((x+y)>a[n-1])
        printf("%lld\n",n);
    else
    {
            for(i=0;i<n;i++)
            {
                if((x+y)==a[i])
                {
                    printf("-1\n");
                    flag=1;
                    break;
                }
                else if ((x+y) > a[i])
                {
                    hell=i;
                }
            }
            if(flag==0)
            {
                printf("%lld\n",hell+1);
            }
    }

}
}

    return 0;
}
