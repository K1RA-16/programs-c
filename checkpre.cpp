#include<iostream>
using namespace std;
#define num 10
int main()
{
    int s= num;
    int a[]={12,31,12};
    int size=sizeof(a);

    cout<<s<<endl;
    return 0;

}
//does not work because of num being a preprocessor deined value