#include <stdio.h>
int main(){
    unsigned long addr, value;
    scanf("%lu %lu", &addr, &value);
    long int first, second, third, forth, fifth, sixth, seventh, eighth;
    long int one=16, two=256,three=256*16, four=65536,five=16*four, six=16777216, seven=16*six;
    first = value/seven;
    value = value%seven;
    second = value/six;
    value = value%six;
    third = value/five%two;
    value = value%five;
    forth = value/four%three;
    value = value%four;
    fifth = value/three%four;
    value = value%three;
    sixth = value/two%five;
    value = value%two;
    seventh = value/one%six;
    value = value%one;
    eighth = value%seven;
    printf("0x%08lx:  %lx%lx %lx%lx %lx%lx %lx%lx\n", addr, first, second, third, forth, fifth, sixth, seventh, eighth);
    return 0;
}