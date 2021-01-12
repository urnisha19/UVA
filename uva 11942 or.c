#include<stdio.h>
int main()
{
    int N,i,j,beard[10],sl,ls;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    {
        for(i=1; i<=N; i++)
        {
            sl=0,ls=0;
            for(j=0; j<10; j++)
            {
                scanf("%d",&beard[j]);
            }
            for(j=0; j<9; j++)
            {
                if(beard[j]>beard[j+1])
                    ls++;
                else if(beard[j]<beard[j+1])
                    sl++;
            }
            if(ls==9 || sl==9)
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
    }
    return 0;
}
