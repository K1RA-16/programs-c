#include<stdio.h>
int main()
{
    int a=0,d=0;
    for(int x=1;x<=500;x++)
    {
        for(int y=1;y<=x;y++)
        {
            if(x%y==0)
            {
                a++;
            }
        }
        if(a==2)
        {d++;
            printf("prime number %d", d);
            printf(" - %d", x);
            printf("\n");
        
        }
        a=0;
    }
    return 0;
}