#include<stdio.h>
int main()
{
    int N,a[N],i,sum;
    float avg=0;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=N;i++)
    {
        avg=avg+a[i];
    }
    printf("%.2f",avg/N);
}