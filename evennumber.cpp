#include<iostream>
using namespace std;
int main()
{
    cout<<"input a number"<<endl;
    int n;
    cin>>n;
    if(n%2==0)
{
    cout<<"it's an even number"<<endl;

}
else
{
    cout<<"it's an odd number"<<endl;

}
int i=n+1,j=0;
do
{
           
        if(i%2==0)
    {
        cout<<i<<" is an even number"<<endl;
j++;

    }
i++;
    
}
 while (j!=10);

 

    
    return 0;

}

