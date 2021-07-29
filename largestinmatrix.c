#include<stdio.h>
int main()
{
    int a[5][5], arr[5];
    printf("enter the matrix\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max=0;
    int final[5];
for(int j=0;j<5;j++)
{
    for(int i=0;i<5;i++)
    {
        arr[i] = a[i][j];
         
    }
      max = arr[0];
      
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
final[j] = max;

}
max=final[0];
for(int i=1;i<5;i++)
{
    if(final[i]>max)
    {
        max = final[i];
    }

}

printf("the largest number in the 5 x 5 matrix is %d", max);
return 0;

}