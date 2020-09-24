#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j;
    char s[100],temp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        gets(s[i]);
    }

    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if((s[i]>s[j]))
            {
                temp=s[i];
                s[i]=s[j];
                 s[j]=temp;
            }
        }
    }
    for(j=0;j<t;j++)
    {
        printf("%s",s[j]);
    }

    return 0;
}
