#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    bool t=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"it is a non prime number"<<endl;
            t=1;
            break;
        }
    }
    if(t==0)
    {
        cout<<"it is a prime number"<<endl;

    }
    return 0;

}