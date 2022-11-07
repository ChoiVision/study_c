#include <stdio.h>

int main(void)
{
    int a= 10;
    printf("a is %d\n", a);
    a++;
    printf("a is %d\n", a);
    
    int b= 20;
    printf("b is %d\n", ++b); // b += 1
    printf("b is %d\n", b++); // end -> b += 1
    printf("b is %d\n", b);

    // for
    for (int i= 1; i<= 10; i ++)
    {
        printf("Hello For world %d \n", i);
    }

    // while
    int i= 1;
    while ( i <= 10 )
    {
        printf("Hello While World %d\n", i++);

    }

    // do while
    int k= 1;
    do {
        printf("Hello Do While World %d\n", k++);
    } while (k <= 10);


    // 2 for

    for (int i= 1; i <= 3; i++)
    {
        printf("FIRST: %d\n", i);

        for (int j= 1; j<=5; j++)
        {
            printf("    SECOND: %d\n", j);
        }
    }

    // 구구단
    for (int i=1 ; i < 10; i ++)
    {
        for (int j= 1; j < 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    // * 
    for (int i=0; i < 5; i ++)
    {
        for (int j=0; j <= i; j ++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i=0; i < 5; i++)
    {
        for (int j=i; j < 5-1; j++)
        {
            printf(" ");
        }

        for (int k=0; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}