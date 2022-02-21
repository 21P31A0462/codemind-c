#include<stdio.h>
int main()
{
    int n,sum=0,product=1,remainder,m;
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        product=product*remainder;
        n=n/10;
    }
   m=product-sum;

    printf("%d",m);
}

