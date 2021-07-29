#include<iostream>
using namespace std;

int binarysearching(int arr[], int n, int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        s=mid+1;
        else 
        e=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter a sorted array"<<endl;
    int arr[n];
    for(in t i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"enter the number to be found"<<endl;
    cin>>key;

    cout<<binarysearching(arr,n,key)<<endl;

return 0;


}