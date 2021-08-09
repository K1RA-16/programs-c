#include<iostream>
using namespace std;
// void calcMax(int arr,int n);
// void calcMin(int arr,int n);
void calcMin(int arr[],int n){
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
       if(arr[i]<min)
       min = arr[i];
    }
    cout<<"min - "<<min<<endl;
}
void calcMax(int arr[],int n){
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
       if(arr[i]>max)
       max = arr[i];
    }
    cout<<"max - "<<max<<endl;
    calcMin(arr,n);

}


void input(){
    cout<<"enter the size of an array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    calcMax(arr,n);
}


int main(){
    input();
    return 0;
}