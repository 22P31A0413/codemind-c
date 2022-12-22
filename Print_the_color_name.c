#include<stdio.h>
int main()
{
    char cletter;
    scanf("%c",&cletter);
    if(cletter=='V')
    {
        printf("Violet");
    }
    else if(cletter=='I')
    {
        printf("Indigo");
    }
    else if(cletter=='B')
    {
        printf("Blue");
    }
    else if(cletter=='G')
    {
        printf("Green");
    }
    else if(cletter=='Y')
    {
        printf("Yellow");
    }
    else if(cletter=='O')
    {
        printf("Orange");
    }
    else if(cletter=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}