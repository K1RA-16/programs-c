#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"enter the number to check if it is armstrong or not"<<endl;
    int n;
    cin>>n;
    int n1=n,m,d=0;
    int size=trunc(log10(n)+1);
    for (int i = 0; i < size; i++)
    {
        m=n%10;
        d=d+(m*m*m);
        n=n/10;
    }
    if(d==n1)
    {
        cout<<"it is an armstrong number"<<endl;

    }
    else
    {
        cout<<"it is not an armstrong number"<<endl;
        
    }
    
    
    return 0;

}