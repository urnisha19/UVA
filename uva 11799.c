#include<stdio.h>
int main()
{
    int T, N, speed, max, i, j;
    scanf("%d",&T);
        for(i=1;i<=T;i++)
        {
            max=0;
            scanf("%d",&N);
            for(j=1;j<=N;j++)
            {
                scanf("%d",&speed);
                if(speed>max)
                    max=speed;
            }
            printf("Case %d: %d\n",i,max);
        }
    return 0;
}
