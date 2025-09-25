#include <stdio.h>
#include <math.h>
int main(){
    int year, month, day, JDN, y, m;
    float a;
    scanf("%d %d %d", &year, &month, &day);
    a = floor((14-month)/12.0);
    y = year+4800-a;
    m=month+12*a-3;
    JDN = day+floor((153*m+2)/5.0)+365*y+floor(y/4.0)-floor(y/100.0)+floor(y/400.0)-32045;
    printf("%d", JDN);
    return 0;
}