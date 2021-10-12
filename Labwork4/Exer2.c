#include <stdio.h>

int SumOfDigits(int number)
{
    if(number==0)
    {
        return 0;
    }
    return (number%10) + SumOfDigits(number/10);
}

int main()
{
    int number=0;
    int result;
    printf("Enter number : %d\n",number); scanf("%d",&number);
    result = SumOfDigits(number);
    printf("Result = %d\n",SumOfDigits(number));
    return 0;
}