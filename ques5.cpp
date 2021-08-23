#include<iostream>
using namespace std;
void move(int arr[],int n){
    int def;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]>=0){
                def = arr[j];
                arr[j] = arr[i];
                arr[i] = def;
            }
        }
    }
}
void sort(int arr[],int n){
    int min,def,k;
    for(int j=0;j<n;j++){
        min = arr[j];
        for(int i=j;i<n;i++){
                if(arr[i]<min)
                { 
                    min = arr[i];
                    k=i;
                }
            }
          arr[k] = arr[j];
          arr[j] = min;

    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move(arr,n);
    print(arr,n);
    sort(arr,n);
    print(arr,n);
    return 0;
}