#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <=(iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            break;          // Optimization 
        }
        
    }
    if (iCnt > (iNo/2))  // No Factor
    {
        return true;
    }
    else                  // Atleast One Factor
    {
        return false;
    }  
    
}
 int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is Prime Number : \n",iValue);
    }
    else
    {
        printf("%d is Not Prime Number : \n",iValue);
    }
    

    return 0;
}
/* 
Time Complexity : For Prime -- O(N/2)
Time Complexity : For Non Prime -- O(1) O(2)


*/