#include <stdio.h>
 
int main() {
 
    int a[10],gunnar=0,emma=0, i;
    for(i=0; i<8; i++){
        scanf("%d",&a[i]);
        if(i<4)
            gunnar+=a[i];
        else
            emma+=a[i];
    }
    if(gunnar>emma)
        printf("Gunnar\n");
    else if(gunnar<emma)
    printf("Emma\n");
    else
    printf("Tie\n");
    
    return 0;
}
