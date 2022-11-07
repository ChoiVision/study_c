#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    // unsigned int i = 0b11111111111111111111111111111111;
    unsigned int u_max = UINT_MAX + 1;
    printf("%u\n", u_max);

    // i to binary representation
    char buffer[33];
    _itoa(u_max, buffer, 2);

    printf("decimal: %u\n", u_max);
    printf("binary: %s\n", buffer);
    
    // printf("%u\n", i);
    // printf("%u\n", u);
    // printf("%u",sizeof(unsigned int));
    // printf("%u",sizeof(i));



}