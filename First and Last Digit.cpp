#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n,index=0,result=0;
cin>>n;
result=n%10;
while(n != 0)
{
    index=n%10;
    //ans.push_back(index);
    n/=10;
}
//result=ans.size()-1;
//result=ans[0]+ans[result];
cout<<result+index<<endl;
}
    return 0;
}
