#include <stdio.h>
int main(){
    int money;
    scanf("%d",&money);
    int fifty, twenty, ten, five, one;
    fifty = money / 50;
    money -= fifty * 50;
    twenty = money / 20;
    money -= twenty * 20;
    ten = money / 10;
    money -= ten * 10;
    five = money / 5;
    money -= five * 5;
    one = money;
    printf("%d\n%d\n%d\n%d\n%d", fifty, twenty, ten, five, one);
    return 0;
}