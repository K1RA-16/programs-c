#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i,j,x;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
        cout<<" ";
        }
        for(x=1;x<=i;x++)
    {
        cout<<x<<" ";

    }
    cout<<endl;

         }

  


return 0;


}