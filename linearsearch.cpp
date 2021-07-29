#include<iostream>
using namespace std;
int linearsearching(int arr[], int n, int key)
{
for (int i = 0; i < n; i++)
{
  if(arr[i]==key)
  {
      return i+1;
  }

}

return -1;

}
int main()
{ cout<<"enter size of array"<<endl;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}

int key;
cout<<"enter the number to find"<<endl;

cin>>key;
cout<<linearsearching(arr,n,key)<<endl;

}
