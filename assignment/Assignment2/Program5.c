#include<stdio.h>

bool CheckEven(int iNo)
{

    if (iNo %2 == 0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Not Even Number");
    }
    
     
    
}

int main()
{
    int iValue = 0;
    bol bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    return 0;
}
