#include <stdio.h>
#include <string.h>

int main(){
    char name[101];
    scanf("%[^\n]", name);
    printf("%llu\n", strlen(name));
    printf("\"%.20s\"", name);
    return 0;
}
