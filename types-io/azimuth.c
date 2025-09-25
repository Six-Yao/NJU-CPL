#include <stdio.h>
#include <math.h>
int main(){
    int xA, yA, xB, yB;
    double distance, angle, PI = acos(-1);
    scanf("%d %d %d %d", &xA, &yA, &xB, &yB);
    distance = hypot(xB - xA, yB - yA);
    angle = atan2((xB-xA),(yB-yA))/PI*180;
    printf("%.4f %.4f", distance, fmod(angle+360,360));
    return 0;
}