#include<stdio.h>

int Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%f",&iValue);

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible By 5");
    }
    
    return 0;
}