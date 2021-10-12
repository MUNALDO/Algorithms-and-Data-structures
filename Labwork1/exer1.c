#include <stdio.h>


void sphenic(int n)
{
    int i,j,count;
    for(i=1;i<=n;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count=count+1;
                break;
            }
        }
        if(count==0 & i != 1){
            printf("%d,",i);
        }
    }
    int p; int q; int r;
    for(p=1;p<i;p++){
        for(q=1;q!=p;q++){
            for(r=1;r!=q;r++){
                if(n=p*q*r){
                    printf("%d = %d*%d*%d",n,p,q,r);
                }
                if(n!=p*q*r){
                    break;
                }
            }
        }
    }
    
    return 0;
}


int main()
{
    int n,sphenicNum; 
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sphenic(n);

    return 0;
}