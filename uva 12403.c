#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    long long T,i,k,total=0,check;
    scanf("%lld",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%s",&a);
        check=strcmp("donate",a);
        if(check==0)
        {
            scanf("%lld",&k);
            total=total+k;
        }
        else
            printf("%lld\n",total);
    }
    return 0;
}

