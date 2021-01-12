#include <stdio.h>
int f91(int N)
{
    if(N>=101)
        return N-10;
    else if(N<=101)
        return f91(f91(N + 11));
}
int main()
{
    int N,i=0;
    while(i<=250000)
    {
        scanf("%d",&N);
        if(N == 0)
            break;
        printf("f91(%d) = %d\n",N,f91(N));
    }
    return 0;
}
