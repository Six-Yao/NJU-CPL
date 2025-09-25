#include <stdio.h>

int main(){
int a = 5;
//a = a*(a += a+3)/a%(a -= 4+ ++a);
printf("%d",a*(a += a+3)/a%13);
}