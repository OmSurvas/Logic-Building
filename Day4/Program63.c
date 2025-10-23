#include<stdio.h>

int main()
{
    int iNo = 723614;
    int iDigit = 0;
    printf("-------------------------------------\n");
    printf("Original Value of the iNo is : %d\n",iNo);

    printf("-------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);

    printf("-------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);
    
    printf("-------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);
    
    printf("-------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("%d",iNo);    
    return 0;
}