#include <stdio.h>
#include <ctype.h>
int main(){
    char month[20], week[20];
    int day, year, hour, minute, second;
    scanf("%s %d %d %s %d %d %d", month, &day, &year, week, &hour, &minute, &second);
    printf("%c%c%c %c%c%c %02d %02d:%02d:%02d %04d\n",
           toupper(week[0]), tolower(week[1]), tolower(week[2]),
           toupper(month[0]), tolower(month[1]), tolower(month[2]),
           day, hour, minute, second, year);
    return 0;
}