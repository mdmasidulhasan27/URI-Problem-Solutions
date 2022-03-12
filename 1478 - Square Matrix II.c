#include<stdio.h>
#include<math.h>

int main()
{
    int c, n;
    int i, j;
    while(1) {
        scanf("%d",&n);
        if(n<=0)
            break;
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                if(j==0)
                    printf("%3d",abs(i-j)+1);
                else
                    printf(" %3d",abs(i-j)+1);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
