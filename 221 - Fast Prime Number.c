#include<stdio.h>
#include<math.h>

int main()
{
    long long int p;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&p);
        if(p==2)
            printf("Prime\n");
        else if(prime(p))
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}

int prime(long long int p)
{
    long long int i, len;
    len = sqrt(p)+1;
    for(i=2; i<=len; i++)
    {
        if(p%i==0)
            return 0;
    }
    return 1;
}
