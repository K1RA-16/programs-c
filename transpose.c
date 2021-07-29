#include<stdio.h>
int main()
{
    int a[4][4];
    printf("enter the matrix\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int k=0;
    int n=0;
    for(int i=0;i<4;i++)
    {
        int j=0+n;
        for(;j<4;j++)
        {
            k=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=k;
        }
    n++;
    }
    printf("the transposed matrix is - \n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
return 0;
}