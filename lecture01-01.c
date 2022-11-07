#include <stdio.h>

int main()
{
    float won= 0;
    float dollar= 0;

    printf("Input Won\n");
    scanf("%f", &won);

    dollar= won * 0.00089;

    printf("Dollar= %f\n", dollar);

    return 0 ;
}