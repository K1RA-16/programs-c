#include<iostream>
using namespace std;
void fact(int n1, int p)
{
 
    if(n1!=1)
    {
        p=p*n1;    
   
          fact(n1-1,p);
        
      

    }
    if(n1==1)
    {
        cout<<"required factorial - "<<p<<endl;
        n1=0;   
    }
}

int main()
{ 
    int n,a=1;
    cout<<"enter the number whose factorial is required"<<endl;
    cin>>n;
    fact(n,a);

    return 0;

}