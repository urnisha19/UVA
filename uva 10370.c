#include<stdio.h>
int main()
{
    int i,j,C,N;
    double marks[1000],sum,avg,above_avg,stdnt_aavg;
    while(scanf("%d",&C)!= EOF)
    {
        for(i=0; i<C; i++)
        {
            sum=0;
            scanf("%d",&N);
            for(j=0; j<N; j++)
            {
                scanf("%lf",&marks[j]);
                sum+=marks[j];
            }
            avg=sum/N;
            stdnt_aavg=0;
            for(j=0; j<N; j++)
            {
                if(marks[j]>avg)
                {
                    stdnt_aavg++;
                }
            }
            above_avg=((stdnt_aavg*100)/N);
            printf("%.3lf%\n",above_avg);
        }
    }
    return 0;
}
