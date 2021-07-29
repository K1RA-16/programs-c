
#include<iostream>
using namespace std;
void factors(int a,int b)
{
    int d=0;
    if(a%b==0)
    {
        for(int y=1;y<=b;y++)
        {
            if(b%y==0)
            {
                d++;
            }
        }
        if(d==2)
        {
            cout<<"prime factor of "<< a<<" - "<<b<<endl;
        }
    }
    b++;
if(b<=a)
    {factors(a,b);}
}

int main()
{
    int n;
    cout<<"enter the number of which prime factors are to be found - ";
    cin>>n;
    cout<<endl;
 
            cout<<"prime factor of "<< n<<" - "<<1<<endl;
        
       
    factors(n, 1);


    return 0;
    }