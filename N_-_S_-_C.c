#include<stdio.h>
int main()
{
    int i,min,max;
    scanf("%d%d",&min,&max);
    for(i=min+1;i<max;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}