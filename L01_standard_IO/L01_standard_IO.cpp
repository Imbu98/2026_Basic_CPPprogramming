// 전처리기
#include <cstdio>

using namespace std;
// 모든 C/C++로 구성된 프로그램은 한 개 이상의 함수로 구성 -> 프로그램 실행시 진입점(entry Point)를 알아야 하기 때문에
// 이중 반드시 있어야 하는 함수, main()함수
// 없으면 컴파일 자체가 안됨.

int main()
{
    int num1 = 0;
    int num2 = 0;
    
    scanf_s("%d",&num1);
    scanf_s("%d",&num2);
    
    // 덧셈
    printf("num1:%d + num2:%d=%d\n",num1,num2,num1+num2);
    // 뺄셈
    printf("num1-num2=%d\n",num1-num2);
    // 곱셈
    printf("num1*num2=%d\n",num1*num2);
    // 몫
    printf("num1/num2=%d\n",num1/num2);
    // 나머지
    printf("나눗셈: num1%%num2=%d\n",num1%num2);
    
    return 0;
    
    
}
