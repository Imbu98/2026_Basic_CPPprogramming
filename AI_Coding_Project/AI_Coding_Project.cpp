#include <cstdio>
#include <cstdint>
#include <memory>
#include <process.h>
#include <string>
#include <vector>

#include "MyHeader.h"

#define MAX_PLAYERS 15

using namespace std;

struct Player
{
    int id;
    const char* name;
    float hp;
    
    void printPlayer()
    {
        printf("Player ID: %d\nname: %s\nhp:%f\n", id, name,hp);
    }
};

int main()
{
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
    
    // // 1. 이중 for문
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 3; k++)
    //         {
    //             printf("i: %d, j: %d\n", i, j);
    //         }
    //         
    //     }
    // }
    //
    // // 2. do-while문
    // int k = 0;
    // do
    // {
    //     printf("do-while: %d\n", k);
    //     k++;
    // } while (k < 3);
    
#pragma endregion
    
#pragma region 메모리 및 포인터
    
    // int a1= 10;
    // int* ptr = &a1;
    //
    // printf("int a의 메모리 크기 : %d\n",sizeof(a1)); 
    //
    // printf("int a의를 가르키는 ptr의 크기 : %d\n",sizeof(ptr)); // 포인터의 크기는 컴파일 시 x32면 4byte, x64면 8byte이다
    //
    //
    // // 1. 정수형 포인터
    // int a = 10;
    // int* pInt = &a;
    // printf("정수: %d, 포인터가 가리키는 값: %d\n", a, *pInt);
    //
    // // 2. 실수형 포인터
    // double b = 3.14;
    // double* pDouble = &b;
    // printf("실수: %f, 포인터가 가리키는 값: %f\n", b, *pDouble);
    //
    // // 3. 문자형 포인터
    // char c = 'A';
    // char* pChar = &c;
    // printf("문자: %c, 포인터가 가리키는 값: %c\n", c, *pChar);
    //
    // // 4. 문자열 포인터 (C 스타일)
    // const char* str = "Hello";
    // printf("문자열: %s, 첫 문자: %c\n", str, *str);
    //
    // // 5. 불리언 포인터
    // bool flag = true;
    // bool* pFlag = &flag;
    // printf("불리언: %d, 포인터가 가리키는 값: %d\n", flag, *pFlag);

    //return 0;

    
#pragma endregion
   
#pragma region 배열
    
    //     // 1. 배열 선언
    //     int arr[3] = {10, 20, 30};
    //
    //     // 2. 포인터로 배열 접근
    // int* ptr1 = arr; // arr == &arr[0]
    //
    // int** ptr2 = &ptr1; // 이중포인터에 포인터 주소 넘겨주기 ptr1과 ptr2의 주소는 다르다
    //
    // printf(" arr 첫번째 원소 값: %d " , arr[0]);
    //
    // return 0;
    //
#pragma endregion
 
    
#pragma region 구조체 및 포인터 
    
    // auto newplayer = std::make_unique<Player>();
    //
    // newplayer->hp = 100;
    //
    // printf("%.f",newplayer->hp);
    
#pragma endregion 
    
#pragma region 매크로
    
    printf("최대 플레이어 수 : %d",MAX_PLAYERS);
    
#pragma endregion
}
