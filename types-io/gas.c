#include <stdio.h>
#include <math.h>
int main(){
    float p, l, t, n;
    const float R = 8.314;
    scanf("%e %e %e", &p, &l, &t);
    printf("%.4e\n", p*pow(l,3)/R/t);
    return 0;
}