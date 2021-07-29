#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    
    if(n<=1000&&n>=1)
    {
        for(int i=0;i<n;i++)
        {
         cin>>arr[i];
         if(arr[i]>10000 || arr[i]<=1)
         {
                 break;
         }

        }

        for(int i=n-1;i>=0;i--)
        {
         cout<<arr[i]<<" ";
            
        }
        
        
    }
    

    return 0;
}
 