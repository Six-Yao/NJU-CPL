#include <stdio.h>
int main(){
    double M=77.15,G=6.674e-11,m,r;
    scanf("%lf %lf",&m, &r);
    printf("%.3le", G*M*m/r/r);
}