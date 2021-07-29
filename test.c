#include<stdio.h>
int main()
{
    int x=110;
    int *y=&x;
    (*y)++;
    printf("%d", *y);
}