#include <stdio.h>

void findMax(int a[], int n)
{
    int i,Max;
    Max = a[0];
    i=2;
    i=i+1;
    if (i>n){
            printf("%d",Max);
    }
    if (a[i] > Max){
            printf("Max = %d",a[i]);
    }
    else{
            i=i+1;
    }

}

int main()
{
    int Max,n;
    n=3;
    int a[3];
    a[0]=10;
    a[1]=19;
    a[2]=9;
    a[3]=30;
    findMax(a,n);

    return 0;
}