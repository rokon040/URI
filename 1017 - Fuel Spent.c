#include <stdio.h>
#include <stdlib.h>

int main(){

    double x,y;
    scanf("%lf %lf", &x, &y);
    printf("%.3lf\n", y / 12 * x);
    return 0;
}
