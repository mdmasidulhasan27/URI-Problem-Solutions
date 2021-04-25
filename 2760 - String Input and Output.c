#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char st1[110],st2[110],st3[110];
    gets(st1);
    gets(st2);
    gets(st3);
    printf("%s%s%s\n",st1,st2,st3);
    printf("%s%s%s\n",st2,st3,st1);
    printf("%s%s%s\n",st3,st1,st2);
    for(i=0; i<10; i++){
        if(st1[i]=='\0')
            break;
        else
            printf("%c",st1[i]);
    }
    for(i=0; i<10; i++){
        if(st2[i]=='\0')
            break;
        else
            printf("%c",st2[i]);
    }
    for(i=0; i<10; i++){
        if(st3[i]=='\0')
            break;
        else
            printf("%c",st3[i]);
    }
    printf("\n");

    return 0;
}
