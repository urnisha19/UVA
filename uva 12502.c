#include<stdio.h>
int main()
{
    int T,x,y,z,amount;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&x,&y,&z);
        amount= z*((2*x)-y)/(x+y);
        printf("%d\n",amount);
    }
    return 0;
}
