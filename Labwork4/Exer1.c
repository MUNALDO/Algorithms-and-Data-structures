#include <stdio.h>

void SumOfDigits(int number)
{
    int s=0;
    while (number>0)
    {
        s += (number%10);
        number = number/10;
    }
    printf("Sum of digits : %d",s);
}

int main()
{
    int number;
    printf("Enter number : "); scanf("%d",number);
    SumOfDigits(number);
}