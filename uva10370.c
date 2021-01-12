#include<stdio.h>
int main()
{
    int i,j,C,N,marks[100],stdnt_aavg=0;
    double sum=0,avg,above_avg;
    while(scanf("%d",&C)!=EOF);
    {
        scanf("%d",&N);
        for(j=0; j<N; j++)
        {
            scanf("%d",&marks[i]);
            sum=sum+marks[i];
        }
        avg=sum/N;
        for(i=0; i<C; i++)
        {
            if(marks[i]>avg)
                stdnt_aavg++;
        }
        above_avg=((stdnt_aavg*100)/N);
        printf("%.3lf%\n",above_avg);
    }
    return 0;
}
