//uva 10071

#include<stdio.h>
int main()
{
    int v,t,displacement;
    while(scanf("%d %d", &v, &t) != EOF)
    {
        displacement=v*2*t;
        printf("%d\n",displacement);
    }
    return 0;
}

