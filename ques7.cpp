#include<iostream>
using namespace std;
void cycle(int arr[], int n,int x){
    int m,i;
    while(x!=0){
        m = arr[n-1];
        for(i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[i+1]=m;
        x--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,x;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter how many digits to cycle"<<endl;
    cin>>x;
    cycle(arr,n,x);
    return 0;
}