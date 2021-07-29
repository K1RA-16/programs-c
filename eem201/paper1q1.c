#include<stdio.h>
int main()
{
int a=3,b=0,c=0;
b=a--;
printf("result-1:%d",b);
printf("result-1a:%d",a);
b=--a;
printf("result-2:%d",b);
c=a++;
printf("result-3:%d",c);
printf("result-3a:%d",a);
c=++a;
printf("resut-4:%d",c);

return 0;
}