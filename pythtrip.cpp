#include<iostream>
using namespace std;
bool check(int a, int b, int c)
{
    int x=max(a, max(b, c));
    int y,z;
    if(x==a)
    {
        y=b;
        z=c;
    }
    else if (x==b)
    {

        y=c;
        z=a;

    }
    else 
    {
        y=b;
        z=a;
    }
    if((x*x)==((y*y)+(z*z)))
    {
        return true;
    }
    else 
    return false;



}
int main()
{
    int x,y,z;
    
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"it is a pythagoras triplet"<<endl;

    }
    else{
        cout<<"not a pythagoras triplet"<<endl;

    }
    return 0;
}