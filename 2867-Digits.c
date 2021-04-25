#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        x=(log10(x)*y)+1;
        printf("%d\n",x);
    }
    return 0;
}
