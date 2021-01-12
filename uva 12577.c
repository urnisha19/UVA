#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int cs=1;
    while(scanf("%s",&a))
    {
        if(!strcmp(a,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",cs++);
        else if(!strcmp(a,"Umrah"))
            printf("Case %d: Hajj-e-Asghar\n",cs++);
        else if(!strcmp(a,"*"))
            break;
    }
    return 0;
}


