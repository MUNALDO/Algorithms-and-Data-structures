#include <stdio.h>

int main()
{
    int sum=0;
    int digit=0;
    int n;
    printf("Enter the number of digits : "); scanf("%d",&digit);
    printf("Enter number : "); scanf("%d",&n);
    for(int i=0; i<=digit; i++)
    {
        int s = n%10;
        n /= 10;
        sum += s;
    }
    printf("Sum of digits : %d\n", sum);
    return 0;
}