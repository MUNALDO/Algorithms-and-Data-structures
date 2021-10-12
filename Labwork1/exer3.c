#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool perfectNum(int n)
{
    int sum=1,i;
    for(i=2;i*i<=n;i++)//Find divisor
    {
        if(n%i == 0)
        {
            if(i*i != n)
            {
                sum = sum + i+ n/i;
            }
            else
            {
                sum = sum + i;
            }
        }
    }
    if(sum == n && n != i)
    {
        return true;
    }
    else
    {
         return false;
    }
}

int main()
{
   for (int n=2; n<30; n++)
   {
       if (perfectNum(n))
       {
           printf("%d is a perfect number ,",n);
       }
   }
}