#include <stdio.h>
#include <math.h>
int main(){
    double pi;
    pi = (log(744+pow(5280, 3)*pow((236674+30303*sqrt(61)), 3)))/(sqrt(427));
    printf("%.15f\n", pi);
    pi = 24*atan(1.0/8)+8*atan(1.0/57)+4*atan(1.0/239);
    printf("%.15f\n", pi);
    return 0;
}