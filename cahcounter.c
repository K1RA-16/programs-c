#include<stdio.h>
#define true 1
#define false 0
 int main()
 {
    char x;
    int n=1, price, a=0;
    while(true)
    {
        printf("enter the price of product %d", n);
        printf(" - ");
        scanf("%d ", &price);
        a=a+price;
        printf("\n");
        printf("do you want to add another product ? if yes then press y - ");
        scanf("%c", &x);
        printf("\n");
        
        if(x!='y')
        {
            
            printf("Total%d\n", a);
            break;
        }
        else 
        n++;

    }
    return 0;
 }