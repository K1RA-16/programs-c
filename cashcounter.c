#include<stdio.h>
#define true 1
#define false 0
 int main()
 {
    char x;
    int n=1, price,a=0;
    while(true)
    {
             printf("do you want to add a product ? if yes then press y - ");
        scanf("%c", &x);
           
if(x!='y')
{
   printf("\n");
   printf("total - %d", a);
   printf("\n");
   
   break;
    }
        printf("enter the price of product %d- ", n);
     
        scanf("%d", &price);
        a=a+price;
        printf("\n");
        
            scanf("%c", &x);
     n++;
    }
    return 0;
 }
       