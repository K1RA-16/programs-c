#include<stdio.h>

void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
}    

int main()
{
    int n=5;
    int arr[n];
      for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    rvereseArray(arr, 0, n-1);
    printf("Reversed array is \n");
  int i;
  for (i=0; i < n; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
    return 0;
}