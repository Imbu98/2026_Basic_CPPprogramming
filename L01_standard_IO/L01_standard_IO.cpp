#include <cstdio>

using namespace std;


int main()
{
    int num1 = 0;
    int num2 = 0;
   
    
    (void)scanf_s("%d",&num1);
    
    (void)scanf_s("%d",&num2);
    
    
    printf("num1:%d + num2:%d=%d\n",num1,num2,num1+num2);
   
    printf("num1-num2=%d\n",num1-num2);
   
    printf("num1*num2=%d\n",num1*num2);
   
    printf("num1/num2=%d\n",num1/num2);
    
    printf("몫은?: num1%%num2=%d\n",num1%num2);
    
    return 0;
    
    
}
