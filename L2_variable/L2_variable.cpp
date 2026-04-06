#include <cstdio>
#include <string>

int main()
{
   
    printf("=========== Variable =================\n");
    
    // 변수의 선언 // 자료형 int, 변수명 A
    int A; // 선언만 하면 A에는 쓰레기 값만 들어감
    A = 20202; // 대입
    
    printf("A는 뭘까요 %d\n",A);
    
    // 변수의 선언 + 정의 ==> 값을 넣어서 변수를 초기화 시켜주는 것
    int B = 2922;
    B= 100;
    printf("B는 바뀌었나요 %d\n",B);
    
    // 상수, 리터럴(literal)
    const int val = 5; // 선언만 하면 컴파일 오류 , const로 선언한 변수는 쓰기가 불가능
    int const val2 = 10; // const의 위치는 변수 앞 또는 자료형
    
    char C = 'A';
    
    char szString[] = "Hello";
    
    printf("szString : %c",szString[2]);
    
    // bool 변수
    bool boolean = true; // 거짓:0 , 참 : 0을 제외한 나머지
    
    
    
    
    //return 0;
}
