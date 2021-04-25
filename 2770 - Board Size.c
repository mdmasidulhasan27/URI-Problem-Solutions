#include<stdio.h>

int main()
{
    int maxX, maxY, n, x, y;
    while(scanf("%d %d %d", &maxX, &maxY, &n)!=EOF)
    {
        while(n--)
        {
            scanf("%d %d", &x, &y);
            if((x<=maxX && y<=maxY) || (y<=maxX && x<=maxY))
                printf("Sim\n");
            else
                printf("Nao\n");
        }
    }
    return 0;
}
