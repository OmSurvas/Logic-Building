#include<stdio.h>
int Add(int a,int b)
{
    int sum = 0;
    sum = a + b; // bussiness logic
    return sum;
}
int main()
{
    int i=0, j=0, Ans = 0;

    printf("Enter First Number");
    scanf("%d",&i);

    printf("Enter Second Number");
    scanf("%d",&j);
    
    Ans = Add(i,j);
    printf("Addition is : %d\n",Ans);

    return 0;
}