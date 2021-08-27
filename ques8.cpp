#include<iostream>
using namespace std;
void sum(int arr[],int n){
	int total = 0,contSum = 0;
	for(int i=0;i<n;i++){
		contSum = contSum + arr[i];
		if(contSum<0)
		contSum = 0;
		else if(contSum > total)
		total = contSum;
	}
	cout<<total;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sum(arr,n);
	return 0;
}