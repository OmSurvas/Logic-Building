#include<stdio.h>

float MultiplactionOfTwoNumbers(
                                    float fNo1,
                                    float fNo2
                                )
    {
        float fMul = 0.0f;
        fMul = fNo1 * fNo2;
        return fMul;
    }

int main()
{
    float fValue1 = 0.0f; float fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter First Number :");
    scanf("%f",&fValue1);

    printf("Enter Second Number :");
    scanf("%f",&fValue2);

    fRet = MultiplactionOfTwoNumbers(fValue1,fValue2);
    printf("Multiplication is : %f\n",fRet);

    return 0;
}