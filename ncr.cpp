#include<iostream>
using namespace std;
int fact(int n)
{
    int i=1;
    for(int j=2;j<=n;j++)
    {
        i=i*j;
    }
    return i;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int a=fact(n)/(fact(r)*fact(n-r));
    cout<<a;
    return 0;

}