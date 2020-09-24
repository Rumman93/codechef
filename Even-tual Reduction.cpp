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
long long int n,m,x,k,d,i=0,index,flag=0,count=0,result,odd,even,sum=0,temp,alphabet[26] = {0},j;
cin>>n;
string str;
cin>>str;
while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
 for(i=0;i<26;i++)
 {
     if(alphabet[i]%2)
     {
         flag=1;
         break;
     }
 }
 if(flag==1)
 {
     printf("NO\n");
 }
 else
 {
     printf("YES\n");
 }
}
    return 0;
}

