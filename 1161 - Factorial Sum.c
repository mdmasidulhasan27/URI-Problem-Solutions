#include<stdio.h>

long long int facto(int f)
{
    int i;
    long long int n=1;
    for(i=1; i<=f; i++)
        n*=i;
    return n;
}

int main()
{
    int a, b;
    long long int sum;
    while(scanf("%d %d", &a, &b)!=EOF){
        sum = facto(a)+facto(b);
        printf("%lld\n", sum);
    }
    return 0;
}
