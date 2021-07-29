#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<"  ";


        }
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";

        }
    
            for(j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }

        
    cout<<endl;

    
    }
return 0;

}
