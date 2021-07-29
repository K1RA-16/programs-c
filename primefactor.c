#include<stdio.h>
void factors(int a,int b)
{
    int d=0;
    if(a%b==0)
    {
        for(int y=1;y<=b;y++)
        {
            if(b%y==0)
            {
                d++;
            }
        }
        if(d==2)
        {
            printf("prime factor of %d", a);
            printf(" - %d", b);
            printf("\n");
        
        }
    }
    b++;
if(b<=a)
    {factors(a,b);}
}

int main()
{
    int n;
    printf("enter the number of which prime factors are to be found");
    printf(" - ");
    scanf("%d", &n);
     printf("prime factor of %d", n);
            printf(" - %d", 1);
            printf("\n");
        
       
    factors(n, 1);


    return 0;
    }