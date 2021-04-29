#include<stdio.h>

int main()
{
    double food;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&food);
        printf("%d dias\n",days(food));
    }
    return 0;
}

int days(double food)
{
    int i=0;
    while(food>1){
        food=food/2;
        i++;
    }
    return i;
}

