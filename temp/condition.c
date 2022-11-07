#include <stdio.h>
#include <time.h>

int main(void)
{
    //버스를 탄다고 가정
    // 학생 (0~19)
    // 일반인(20~)

    // int age= 15;
    
    // if (age >= 20)
    //     printf("일반인입니다.\n");

    // else
    //     printf("학생입니다.\n");
    
    // 초등 (8-13)
    // 중학생 (14-16)
    // 고등학생 (17-19)
    // if / else if / else 
    
    // int age= 28;
    // if (age >= 8 && age <= 13)
    
    // {
    //     printf("초등학생입니다.\n");
    // }
    
    // else if (age >= 14 && age <= 16)
    
    // {
    //     printf("중학생입니다.\n");
    // }
    
    // else if (age >= 17 && age <= 19)
    
    // {
    //     printf("고등학생입니다.\n");
    // }

    // else
    // {
    //     printf("학생이 아닙니다.\n");
    // }

    // break/continue
    
    // for (int i=1; i<=30; i++)
    // {
    //     if (i >= 6)
    //     {
    //         printf("Go Home\n");
    //         break;
    //     }
    //     printf("%dth Student Ready to Presentation.\n", i);
    // }

    // for (int i=1; i <= 30; i++)
    // {
    //     if (i >= 6 && i <= 10)
    //     {
    //         if (i == 7)
    //         {
    //             printf("No %d Student.\n", i);
    //             continue;
    //         }
    //         printf("Ready Your Presentation %d Student.\n",i);
    //     }
    // }

    // && ||
    // int a= 10;
    // int b= 10;
    // int c= 12;
    // int d= 13;

    // if (a == b || c == d)
    // {
    //     printf("A is same to B, or C is same to D\n");
    // }

    // else
    // {
    //     printf("Value is Different.");
    // }

    // 가위 바위 보
    srand(time(NULL));
    int i= rand() % 3;
    if (i== 0)
    {
        printf("가위\n");    
    }
    else if (i == 1)
    {
        printf("바위\n");
    }
    else if (i ==2)
    {
        printf("보\n");
    }
    else{
        printf("UNKNOWN");
    }
    return 0;
}