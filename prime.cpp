#include<iostream>
using namespace std;
int main()
{
   int a , b;
    cin>>a>>b;
   int n,m;
  
 
   
   if ( a>b)
   {
m=b;
n=a;



   }
else
{
    n=b;
    m=a;

}
int x,y;


    for(x=m;x<=n;x++)
    { 
        
        
        for(y=2; y<x ;y++)
        {
            if(x%y==0)
            {
                cout<<x<<" is non prime"<<endl;
                break;
            }


         }  
         if (y==x)
         {cout<<x<<" is prime"<<endl;
         }
  
  
    }
return 0;

}