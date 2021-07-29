#include<iostream>
#include<math.h>
using namespace std;
int input()
{
    int n;
    cin>>n;
    return n;
    
}
   
void primenumbers(int i)
{
    int x=0;
   for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x<1)
        {
            cout<<i<<" is a prime number."<<endl;

        }
    return;
    
}
int main()
{
    cout<<"enter two numbers"<<endl;
    int n1=input();
    int n2=input();
    int a,b;

    if (n1>n2)
    {
      a=n2;
      b=n1;
    }
    else
    {
        a=n1;
        b=n2;
    }

    for(int i=a;i<=b;i++)
    {
        primenumbers(i);
      
    }
    return 0;


}