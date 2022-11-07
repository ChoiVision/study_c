# include <stdio.h>

int main()
{
    int i= 0, j= 0;

    printf("Input Two Integers\n");

    scanf("%d%d", &i, &j); //& : ampersand

    printf("Your numbers are %d and %d\n",i, j);

    int sum= i + j;

    printf("%d plus %d is %d \n", i, j, sum);

    return 0;

}