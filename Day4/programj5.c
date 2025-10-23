#include<stdio.h>

int main()
{
    int i=0, j=0, Ans = 0;

    printf("Enter First Number");
    scanf("%d",&i);

    printf("Enter Second Number");
    scanf("%d",&j);
    
    Ans = i + j;

    printf("Addition is : %d\n",Ans);

    return 0;
}