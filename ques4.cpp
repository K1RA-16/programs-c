#include<iostream>
using namespace std;
int main(){
    int arr[3];
    cout<<"enter a three index array"<<endl;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }  
    for(int i=0;i<2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int k = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = k;
        }
    }
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }  
    return 0;
}