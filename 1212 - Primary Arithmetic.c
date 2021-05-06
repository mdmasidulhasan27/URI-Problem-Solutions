#include <stdio.h>

int main() {
    long long int a, b,totalCarry, precarry;
    while(1){
        scanf("%lld %lld", &a, &b);
        if(a==0 && b==0)
            break;
        totalCarry = 0;
        precarry = 0;
        while(1){
            if(a==0 && b==0)
                break;
            if((a%10 + b%10 + precarry)>9){
                totalCarry++;
                precarry = 1;
            }
            else
                precarry = 0;
            a=a/10;
            b=b/10;
        }
        if (totalCarry == 0)
            printf("No carry operation.\n");
        else if(totalCarry == 1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",totalCarry);
    }
    return 0;
}
