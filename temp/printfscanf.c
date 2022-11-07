#include <stdio.h>

int main(void){
    // int
    int age= 12;
    printf("%d\n", age);

    age= 13;
    printf("%d\n", age);

    // float
    float f= 46.5f;
    printf("%f\n", f);
    printf("%.2f\n", f);

    double d= 4.425;
    printf("%.2lf\n", d);

    // constant
    const int YEAR= 1995;
    printf("Born at %d\n", YEAR);
    // YEAR= 2000;

    // printf
    // cal
    int add= 3 + 7 ;
    printf("add: %d\n", add);
    printf("%d + %d = %d \n", 3, 7, 3 + 7);

    // scanf
    // input -> save
    int input;
    printf("Insert Value: ");
    scanf("%d", &input);
    printf("Input Value is %d\n", input);

    int one, two, three;
    printf("Insert 3 Values: ");
    scanf("%d %d %d", &one, &two, &three);
    printf("First Value is %d\n", one);
    printf("Second Value is %d\n", two);
    printf("Third Value is %d\n", three);

    // string
    char c= 'A';
    printf("%c\n", c);

    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);

    return 0;
}