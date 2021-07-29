#include<iostream>
#include<climits>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
int maxNo=INT_MIN;
maxNo=max(a,b);
maxNo=max(maxNo,c);


 
cout<<"max number is "<<maxNo<<endl;
return 0;

}