#include<iostream>
using namespace std;
int main(){
    int arr[3];
    cout<<"enter a three index array"<<endl;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }  
    int x=1;
    while(x!=0)
    for(int i=0;i<2;i++)
    {
        x=0;
        if(arr[i]>arr[i+1])
        {
        //     cout<<arr[i]<<" "<<arr[i+1]<<endl;
            int k = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = k;
            x++;
        }
    }
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }  
    return 0;
}