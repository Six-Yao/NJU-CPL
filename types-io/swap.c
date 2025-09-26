#include <stdio.h>
int main(){
    int a,b,c, z;
    scanf("%d", &z);
    a = z/100;
    b = z/10%10;
    c = z%10;
    z = c*100+b*10+a;
    printf("%d\n", z);
}