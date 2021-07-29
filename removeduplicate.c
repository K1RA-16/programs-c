#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d" , &n);
    int arr1[n],arr1copy[n];
    printf("enter the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i < n; i++) {
      arr1copy[i] = arr1[i];
   }
    int a=0,b=n;
    for(int i=0;i<n;i++)
    {
 
        if(arr1copy[i]!=-1)
        
        {
            for(int j=0;j<n;j++)
        {
            if(arr1copy[i]==arr1copy[j])
            {
                a++;
                if(a!=1)
                arr1copy[j]=-1;
            }

     
            
        }
        }
        if(a>0)
        { 
            a=a-1;
            arr1copy[i]=-1;
        }
      
        b=b-(a);
        a=0;

    }
    printf("\n");
    int arr2[b],y=0,k=0;
    arr2[0]=arr1[0];

    for(int i=1;i<n;i++)
    {
        k=0;
        for(int j=0;j<y+1;j++)
        {
            if(arr1[i]==arr2[j])
            {
                k++;
                 
            }         
            
            
        }
        if(k==0)
        {
            y++;
            arr2[y]=arr1[i]; 
        }
     
   
    }
      for(int i=0;i<b;i++)
    {
        printf("%d  ", arr2[i]);
    }

    return 0;

}