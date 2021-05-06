#include <stdio.h>

int main() {
    int n1, i;
    double n2, paa, ar[1001];
    double avg, res;
    scanf("%d",&n1);
    while(n1--){
        scanf("%lf",&n2);
        avg = 0, paa=0;
        for(i=0; i<n2; i++){
            scanf("%lf",&ar[i]);
            avg+=ar[i];
        }
        avg/=n2;
        for(i=0; i<n2; i++)
            if(ar[i]>avg)
                paa++;
        res = (paa*100)/n2;
        printf("%.3lf%%\n",res);
    }
    return 0;
}
