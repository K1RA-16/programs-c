#include<iostream>
using namespace std;
int main()
{
   int n=5,s;
   int n1=n;
   for (int i=1;i<=n;i++)
   {
      for(int j=1;j<=i;j++)
      {
         cout<<"*"<<" ";
      }
      s=2*(n1-1);
      for(int j=s;j>=1;j--)
      {
         cout<<"  ";

      }
      for(int j=1;j<=i;j++)
      {
         cout<<"*"<<" ";
      }
      cout<<endl;

      n1--;

   }
n1=1;
for (int i=n;i>=1;i--)
   {
      for(int j=1;j<=i;j++)
      {
         cout<<"*"<<" ";
      }
      s=2*(n1-1);
      for(int j=s;j>=1;j--)
      {
         cout<<"  ";

      }
      for(int j=1;j<=i;j++)
      {
cout<<"*"<<" ";

      }
      n1++;
cout<<endl;
   }
   
   return 0;


}