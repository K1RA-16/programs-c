#include<iostream>
using namespace std;
int digitalRoot(int n)
{
   
     int ans;
    
       if(n<10)
     return n;
    else
    {
        while(n>=10)   
        {
            ans=0;
            while(n!=0)
            {  
                ans=ans+(n%10);
                n=n/10;
               
            }
            n=ans;
          
            
        }
        
       
        return ans;
}
}
int main()
{
    int n;
    cin>>n;
    cout<<digitalRoot(n);
}