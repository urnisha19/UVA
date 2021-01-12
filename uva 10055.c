#include<stdio.h>
int main()
{
    int long long a,b,difference;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
            difference=a-b;
        else
            difference=b-a;
        printf("%lld\n",difference);
    }
    return 0;
}
