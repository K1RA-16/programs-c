#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int sum = 0;
for (int counter=0; counter<=n; counter++)
{
    sum=sum+counter;

}
cout<<sum<<endl;
int m=sum/2;

while(m!=0)
{
    cout<<m;
    m=m/2;
}



return 0;


}
