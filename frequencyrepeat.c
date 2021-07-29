#include<stdio.h>
int main()
{
    int array[]={1,3,4,1,2,1,2,1,5,7,8,1,2,5,5,1,8,9,10,6,4,5,6};
    int n,d=0;
    printf("enter the number to be found\n");
    scanf("%d", &n);
    int size=sizeof(array)/sizeof(array[0]); 
    for(int i=0;i<size;i++)
    {
        if(n==array[i])
        {
            d++;

        }
    }
    printf("frequency of the provided value is - %d", d);
    

return 0;

}