#include<stdio.h>
#include<string.h>

int main()
{
    char number[1000001];
    int i, len, leap, fes, div4, div15, div55, div100, div400;
    int newl=0;
    while(gets(number))
    {
        if(newl)
            printf("\n");
        newl =1;
        div4=div15=div55=div100=div400=leap=fes=0;
        len = strlen(number);
        for(i=0; i<len; ++i){
            div4 = ((div4*10)+(number[i]-'0'))%4;
            div15 = ((div15*10)+(number[i]-'0'))%15;
            div55 = ((div55*10)+(number[i]-'0'))%55;
            div100 = ((div100*10)+(number[i]-'0'))%100;
            div400 = ((div400*10)+(number[i]-'0'))%400;
        }
        if((div4==0 && div100!=0) || (div400==0)){
            leap = 1;
            fes = 1;
            printf("This is leap year.\n");
        }
        if(div15==0){
            printf("This is huluculu festival year.\n");
            fes = 1;
        }
        if(leap==1 && div55==0)
            printf("This is bulukulu festival year.\n");
        if(fes==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}


