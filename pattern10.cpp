#include<iostream>
using namespace std;
int main()
{
    int n=5;
 int n1=n,s;

 for(int i=1;i<=n;i++)
 {
    
     for(int j=n1-1;j>=0;j--)
     {
         cout<<"  ";

     }
     n1--;
     for(int j=n;j>=0;j--)
     {
         cout<<"*"<<" ";

     }

     cout<<endl;

 }
 return 0;
    
}