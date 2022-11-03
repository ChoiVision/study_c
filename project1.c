#include <stdio.h>

int main(){
    char name[256];
    printf("What is Your name?\n");
    scanf("%s", name, sizeof(name));

    int age;
    printf("How old are you?\n");
    scanf("%d", &age);

    float weight;
    printf("How much do you weigh?\n");
    scanf("%f", &weight);

    double height;
    printf("How tall are you?\n");
    scanf("%lf", &height);

    char crime[256];
    printf("What did you do?\n");
    scanf("%s", crime, sizeof(crime));

    printf("==== INFO ====\n");
    printf("NAME    : %s\n", name);
    printf("AGE     : %d\n", age);
    printf("WEIGHT  : %.2f\n", weight);
    printf("HEIGHT  : %.2lf\n", height);
    printf("CRIME   : %s\n", crime);

    return 0;
}