// iteration
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iNo = 0;
}
int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter Number : \n");
    scanf("%d\n",&iNo);

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