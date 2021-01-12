#include <stdio.h>
#include <string.h>
int main()
{
    int i=1;
    char str[14];
    while(scanf("%s",&str)!=EOF)
    {
        if(!strcmp(str,"#"))
            break;
        else if(!strcmp(str,"HELLO"))
            printf("Case %d: ENGLISH\n",i);
        else if(!strcmp(str,"HOLA"))
            printf("Case %d: SPANISH\n",i);
        else if(!strcmp(str,"HALLO"))
            printf("Case %d: GERMAN\n",i);
        else if(!strcmp(str,"BONJOUR"))
            printf("Case %d: FRENCH\n",i);
        else if(!strcmp(str,"CIAO"))
            printf("Case %d: ITALIAN\n",i);
        else if(!strcmp(str,"ZDRAVSTVUJTE"))
            printf("Case %d: RUSSIAN\n",i);
        else
            printf("Case %d: UNKNOWN\n",i);
        i++;
    }

    return 0;
}
