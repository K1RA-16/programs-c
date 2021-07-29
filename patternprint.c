#include<stdio.h>
int main()
{
   
    int i=2;
    printf("*");
       printf("\n");
    for(int j=2;j<=10;j++)
    {
          for(int a=i;a<=i+2;a++)
          {
             printf("(%d", i);
             printf(") ");
             printf("%d", a);
             printf(" ");
          }
       printf("*");
       printf("\n");
          i=i+2;
          
               
    }

    return 0;

}