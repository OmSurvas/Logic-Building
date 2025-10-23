// iteration
#include<stdio.h>

int main()
{
    int iNo = 723614;
    int iDigit = 0;

    printf("-------------------------------------\n");
    printf("Original Value of the iNo is : %d\n",iNo);
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("Digit is :%d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d",iNo);  
    }
    
        

    printf("-------------------------------------\n");

   
    return 0;
} 