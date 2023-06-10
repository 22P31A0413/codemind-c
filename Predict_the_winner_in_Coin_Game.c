#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%4==0 || y%4==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}