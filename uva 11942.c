#include<stdio.h>
int main()
{
    int N,beard[100],i,j;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    {
        for(i=1; i<=N; i++)
        {
            for(j=0; j<10; j++)
                scanf("%d",&beard[j]);
            if((beard[0]>beard[1])&&(beard[1]>beard[2])&&(beard[2]>beard[3])&&(beard[3]>beard[4])&&(beard[4]>beard[5])&&(beard[5]>beard[6])&&(beard[6]>beard[7])&&(beard[8]>beard[9]))
                printf("Ordered\n");
            else if((beard[0]<beard[1])&&(beard[1]<beard[2])&&(beard[2]<beard[3])&&(beard[3]<beard[4])&&(beard[4]<beard[5])&&(beard[5]<beard[6])&&(beard[6]<beard[7])&&(beard[8]<beard[9]))
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
    }
    return 0;
}
