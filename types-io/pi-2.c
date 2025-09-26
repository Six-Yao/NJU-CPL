#include <stdio.h>
#include <math.h>
int main(){
    double pi;
    pi = 16*atan(1/5.0)-4*atan(1/239.0);
    printf("%.15f\n", pi);
    pi = log(pow(640320,3)+744)/sqrt(163);
    printf("%.15f\n", pi);
    return 0;
}