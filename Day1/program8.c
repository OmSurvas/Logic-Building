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
        Perform Addition Of No1 & No2
        Display The Addition On Screen
    STOP

*/
#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;
    // Updator
    if (fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    // Updator
    if (fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2; // bussiness logic
    return fSum;
}
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