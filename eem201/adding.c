#include<stdio.h>
void add(int a, int b)
{
    int sum;
    sum=a+b;
    printf("%d",sum);

}

int main()
{
    int a,b;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);
    add(a,b);
    return 0;


}