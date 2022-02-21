#include<stdio.h>
int main()
{
    int N,S,R=0;
    scanf("%d",&N);
    while(N!=0){
        S=N%10;
        N/=10;
        R=R*10+S;
    }
    printf("%d",R);
}
