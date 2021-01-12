#include<stdio.h>
int main()
{
    int n,a,b,s,d;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        if (a>=b && (a+b)%2==0)
        {
            s=(a+b)/2;
            d=(a-b)/2;
            printf("%d %d\n",s,d);
        }
        else
            printf("impossible\n");
    }
    return 0;
}
