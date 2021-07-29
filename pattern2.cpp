#include<iostream>
using namespace std;
int main()
{
    int r=5,c=4;
    for(int y=0;y<c;y++)
    {
        cout<<"*"<<" ";
        }
        cout<<endl;

for(int x=0;x<r-2;x++)
{
    cout<<"*"<<" ";

    for(int y=1;y<c-1;y++)
    {
        cout<<" "<<" ";

    }

cout<<" ";


cout<<"*"<<" "<<endl;
}

    for(int y=0;y<c;y++)
    {
        cout<<"*"<<" ";
        }
        cout<<endl;

return 0;

}
