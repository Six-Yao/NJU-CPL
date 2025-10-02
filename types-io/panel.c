#include <stdio.h>
int main(){
    int W; char id[51],name[51],addr[51];
    scanf("%d %[^,],%[^,],%s", &W,id,name,addr);
    printf("| ID       | %-*.*s |\n", W,W, id);
    printf("| Username | %-*.*s |\n", W,W, name);
    printf("| Email    | %-*.*s |\n", W,W, addr);
    return 0;
}