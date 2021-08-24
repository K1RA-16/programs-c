#include<iostream>
#include <set>
using namespace std;
void makeset(int arr1[],int arr2[],int n1,int n2){
    set<int> s;
    int j,i;
    for(i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(j=0;j<n2;j++){
         s.insert(arr2[j]);
    }
    set<int>::iterator itr;
    for (itr = s.begin();itr != s.end() ; itr++)
    {
       cout << *itr<<" ";
    }
    cout<<endl;
}
void intersection(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
        i++;
        else if(arr2[j]<arr1[i])
        j++;
        else if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            
        }
    }
}
int main(){
    cout<<"enter size of first array"<<endl;
    int n1,n2;
    cin>>n1;
    cout<<"enter size of second array"<<endl;
    cin>>n2;
    int arr1[n1],arr2[n2];
     cout<<"enter first array"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
     }
     cout<<"enter second array"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
     }
     makeset(arr1,arr2,n1,n2);
     intersection(arr1,arr2,n1,n2);
     return 0;
}