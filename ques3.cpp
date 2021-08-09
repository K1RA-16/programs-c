#include<iostream>
#include <vector>
using namespace std;
int print(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void getElement(vector<int> v)
{
   int len = v.size();
   cout<<"enter which element to find"<<endl;
   int n;
   vector<int>::iterator j;
   cin>>n;
   if(n>len)
   cout<<"enter valid position"<<endl;
   else{
      // cout<<len<<"  "<<n<<endl;
      int &maxElement= v.at(n-1);
      int &minElement = v.at(len-1-(n-1));
     cout<<n<<"th "<<"minimum element is - "<<minElement<<endl;
   cout<<n<<"th "<<"maximum element is - "<<maxElement<<endl;
   }
}
void makeSet(int arr[],int n){
    int a=0;
    vector<int> v;
    //cout<<n<<endl;
    //    print(arr,n);
    for(int i=0;i<n;i++){
        a=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {a++;
            cout<<arr[i]<<arr[j]<<endl;
        }
        }
        v.push_back(arr[i]);       
        i=a+1;
        
       // cout<<a<<endl;
        
        
    }
    getElement(v);
}

void sort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int max = arr[i];
        int k=i;
        for(int j=i;j<n;j++){
            if (max<arr[j]){
          //  cout<<"max"<<max<<arr[j]<<endl;
            max = arr[j];
            k=j;
            }
        }
       // cout<<arr[i]<<"swapped with"<<arr[k]<<endl;
        int swap = arr[i];
        arr[i] = max;
        arr[k] = swap;
        
      //  print(arr,n);
    }
   // print(arr,n);
 
    makeSet(arr,n);
  
}

void input(int n){
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
}
int main(){
    cout<<"enter the length of array"<<endl;
    int n;
    cin>>n;
    input(n);
    
    return 0;
}