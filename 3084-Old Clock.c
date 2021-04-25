#include<stdio.h>

int main()
{
    int dHour,dMin, hour;
    float min;
    while(scanf("%d%d",&dHour,&dMin)!=EOF)
    {
        hour = dHour/30;
        min = dMin/6;
        if(hour<10)
            printf("0%d:",hour);
        else
            printf("%d:",hour);
        if(min<10)
            printf("0%.0lf\n",min);
        else
            printf("%.0lf\n",min);
    }
    return 0;
}
