#include<bits/stdc++.h>
#define ull unsigned long long int
#define mod 1000000007
using namespace std;


ull first(ull a,ull n,ull d)
{
    ull res=1;
    while(n)
    {
        if(n%2)
            res=((res%d)*(a%d))%d;
        a=((a%d)*(a%d))%d;
        n>>=1;
    }
    return res;
}

ull gcd(ull a,ull b,ull n)
{
    if(a==b)
    {
        return (first(a,n,mod)+first(b,n,mod))%mod;
    }
    ull candidate=1;
    ull diff=abs(a-b);
    //a-b;
    for(ull i=1;i*i<=diff;i++)
    {
        if(diff%i == 0)
        {
            ull temp=(first(a,n,i)+first(b,n,i))%i;
            if(temp==0)    candidate=max(candidate,i);
            temp=(first(a,n,diff/i)+first(b,n,diff/i))%(diff/i);
            if(temp==0)  candidate=max(candidate,diff/i);
        }
    }
    return candidate%mod;
}


int main()
{
    ull t;
    cin>>t;
    //ull mod=1000000007;
    while(t--)
    {
        ull a,b,n;
        cin>>a>>b>>n;
        //cout<<first(a,n,mod)<<endl;

        cout<<gcd(a,b,n)<<endl;

    }
    return 0;
}
