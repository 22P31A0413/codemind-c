#include<stdio.h>
int main()
{
    int n,sq,q,r,s=0;
    scanf("%d",&n);
    sq=n*n;
    q=sq;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}