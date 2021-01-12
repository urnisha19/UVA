#include<stdio.h>
int main()
{
    int T,i,s1,s2,s3;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d",&s1,&s2,&s3);
        if((s1>s2 && s1<s3)||(s1<s2 && s1>s3))
            printf("Case %d: %d\n", i, s1);
        else if((s2>s1 && s2<s3)||(s2<s1 && s2>s3))
            printf("Case %d: %d\n", i, s2);
        else
            printf("Case %d: %d\n", i, s3);
    }
    return 0;
}
