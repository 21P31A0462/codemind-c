#include<stdio.h>
int main()
{
    int n,l,i;
    scanf("%d",&n);
    scanf("%d",&l);
    for(i=0;i<=l;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",n,i,n*i);
    }
}