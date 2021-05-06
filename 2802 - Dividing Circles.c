#include <stdio.h>

int main() {

    long long int n, res, lines, points;
    scanf("%lld",&n);
    lines = ((n*(n-1))/2);
    points = ((n*(n-1)*(n-2)*(n-3))/24);
    res = 1 + lines + points;
    printf("%lld\n",res);
    return 0;
}
