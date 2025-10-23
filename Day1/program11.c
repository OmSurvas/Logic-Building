/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        If The Input is Negative then Convert it into Positive
        Perform Addition Of No1 & No2
        Display The Addition On Screen
    STOP

*/

////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It Is Used To Perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Om Sharad Survase
//  Date :          09/10/2025
//
////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                     // First Input 
                            float fNo2                      // Second Input
                        )
{
    float fSum = 0.0f;                                      // To Store The Result
                                           
    fSum = fNo1 + fNo2;                                     // bussiness logic
    return fSum;
    // End Of AdditionNumber
}
////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For The Application
//
////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;                     // To accept user input
    float fRet = 0.0f;                                        // To Store The Result

    printf("Enter First Number");
    scanf("%f",&fValue1);

    printf("Enter Second Number");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);
    printf("Addition is : %f\n",fRet);

    return 0;
    // End Of Main
}
////////////////////////////////////////////////////////////////////
//
//  TestCases Sucessfully handled by the application
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
////////////////////////////////////////////////////////////////////