#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input the size of an array"<<endl;
    cin>>n;
    string a[n];
    cout<<"enter the array"<<endl;
    for (int i = 0;i < n; i++)
    {   
        cin>>a[i];
    }
    for (int i=n-1;i>=0;i--)
    {
       
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}