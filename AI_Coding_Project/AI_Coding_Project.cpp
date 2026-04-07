#include <cstdio>
#include <cstdint>
<<<<<<< HEAD
#include <process.h>
=======
>>>>>>> 93cd331d1362bd41be88743cfc5cd9eaaf5bef20
#include <string>


int main()
{
<<<<<<< HEAD
// #pragma region 자료형 설명
//     // 정수형
//     int32_t a = 100;
//     uint32_t b = 200;
//
//     int64_t c = 10000000000LL;
//     uint8_t d = 255;
//     
//     // 실수형
//     float e = 3.14f;
//     double f = 3.141592;
//     
//     // 문자형
//     char g = 'A';
//     
//     // 불리언 (printf에서는 int처럼 출력됨)
//     bool h = true;
//
//     printf("int32_t: %d\n", a);
//     printf("uint32_t: %u\n", b);
//     printf("int64_t: %lld\n", c);
//     printf("uint8_t: %u\n", d);
//     printf("float: %.6lf\n", e);
//     printf("double: %f\n", f);
//     printf("char: %c\n", g);
//     printf("float: %d\n", h);
// #pragma endregion 
//    
// #pragma region 조건문
//     int number = 10;
//
//     // 1. if
//     if (number > 0)
//     {
//         printf("양수입니다.\n");
//     }
//
//     // 2. if - else
//     if (number % 2 == 0)
//     {
//         printf("짝수입니다.\n");
//     }
//     else
//     {
//         printf("홀수입니다.\n");
//     }
//
//     // 3. if - else if - else
//     if (number > 10)
//     {
//         printf("10보다 큽니다.\n");
//     }
//     else if (number == 10)
//     {
//         printf("10과 같습니다.\n");
//     }
//     else
//     {
//         printf("10보다 작습니다.\n");
//     }
//
//     // 4. switch
//     switch (number)
//     {
//     case 5:
//         printf("5입니다.\n");
//         break;
//     case 10:
//         printf("10입니다.\n");
//         break;
//     default:
//         printf("기타 값입니다.\n");
//         break;
//     }
//
//     // 5. 삼항 연산자
//     const char* result = (number > 0) ? "양수" : "음수 또는 0";
//     printf("삼항 연산자 결과: %s\n", result);
//
//     char str[] = "str";
// #pragma endregion
    
#pragma region 반복문
    
   
    // for (int i=0; i<10;i++)
    // {
    //     printf("for: i= %d\n", i);
    // }
    //
    // printf("for문이 끝난 뒤 i : %d\n",i);
    //
    //
    //
    // // 2. while문
    // int j = 0;
    // while (j < 5)
    // {
    //     printf("while: %d\n", j);
    //     
    //     j++;
    // }
    
    // 1. 이중 for문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("i: %d, j: %d\n", i, j);
            }
            
        }
    }

    // 2. do-while문
    int k = 0;
    do
    {
        printf("do-while: %d\n", k);
        k++;
    } while (k < 3);


    return 0;
=======
#pragma region 자료형 설명
    // 정수형
    int32_t a = 100;
    uint32_t b = 200;

    int64_t c = 10000000000LL;
    uint8_t d = 255;
    
    // 실수형
    float e = 3.14f;
    double f = 3.141592;
    
    // 문자형
    char g = 'A';
    
    // 불리언 (printf에서는 int처럼 출력됨)
    bool h = true;

    printf("int32_t: %d\n", a);
    printf("uint32_t: %u\n", b);
    printf("int64_t: %lld\n", c);
    printf("uint8_t: %u\n", d);
    printf("float: %.6lf\n", e);
    printf("double: %f\n", f);
    printf("char: %c\n", g);
    printf("float: %d\n", h);
#pragma endregion 
   
#pragma region
    int number = 10;

    // 1. if
    if (number > 0)
    {
        printf("양수입니다.\n");
    }

    // 2. if - else
    if (number % 2 == 0)
    {
        printf("짝수입니다.\n");
    }
    else
    {
        printf("홀수입니다.\n");
    }

    // 3. if - else if - else
    if (number > 10)
    {
        printf("10보다 큽니다.\n");
    }
    else if (number == 10)
    {
        printf("10과 같습니다.\n");
    }
    else
    {
        printf("10보다 작습니다.\n");
    }

    // 4. switch
    switch (number)
    {
    case 5:
        printf("5입니다.\n");
        break;
    case 10:
        printf("10입니다.\n");
        break;
    default:
        printf("기타 값입니다.\n");
        break;
    }

    // 5. 삼항 연산자
    const char* result = (number > 0) ? "양수" : "음수 또는 0";
    printf("삼항 연산자 결과: %s\n", result);

    char str[] = "str";
    
    
   
    

>>>>>>> 93cd331d1362bd41be88743cfc5cd9eaaf5bef20
    
#pragma endregion
    
    
<<<<<<< HEAD
    
=======
>>>>>>> 93cd331d1362bd41be88743cfc5cd9eaaf5bef20

    return 0;
    
}
