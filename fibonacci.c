#include<stdio.h>

void series(int a1,int a2,int a)
{
int a3=a1+a2;
    a++;
   
    printf("%d ", a3);

if(a<=25)
    {
        series(a2,a3,a);
    }
}
int main()
{
    int a1=0,a2=1,a=0;
    printf("%d %d ",a1 ,a2);
    series(a1,a2,a);
    


}
