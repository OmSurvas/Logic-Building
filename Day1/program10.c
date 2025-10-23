/*
    Step1 : Understand the problem statement
    Step2 : Write the algorithm
    Step3 : Decide the programming launguage
    Step4 : Write the program
    Step5 : test the program
*/
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
//  Author :        Om Survase
//  Date :          09/10/2025
//
////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2; // bussiness logic 
    return fSum;
}
////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For The Application
//
////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter First Number");
    scanf("%f",&fValue1);

    printf("Enter Second Number");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);
    printf("Addition is : %f\n",fRet);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
//  TestCases Sucessfully handled by the application
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
//  Input1 : 10.5       Input2 : 3.2        OutPut : 13.7
////////////////////////////////////////////////////////////////////