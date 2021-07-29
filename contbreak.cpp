#include<iostream>
using namespace std;
int main()
{
    int n;
    for (n=0;n<101;n++)
    {
        if (n%3==0)
        {
            continue;
        }
        cout<<n<<endl;

    }
return 0;

} 