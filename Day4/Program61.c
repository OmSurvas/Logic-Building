#include<stdio.h>

int main()
{
    int iNo = 7236;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);
    
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);
    
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);
    
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);    
    return 0;
}