#include<iostream>
using namespace std;
void decimalToBinary()
{
    int n;
    cout<<"enter the decimal number"<<endl;
    cin>>n;
    int x=1,ans=0;
    while(x <= n)
    {
        x*=2;
    }

    x/=2;
    while(x>0)
    {
        int lastDigit = n/x;
        cout<<"lastDigit"<<lastDigit<<endl;
        n -= lastDigit*x;
        x /= 2;
        cout<<"n"<<n<<endl;
        ans = ans*10 + lastDigit;

    }
    cout<<ans;

}
void decimalToOctal()
{
    int n;
    cout<<"enter the decimal number"<<endl;
    cin>>n;
    int x=1,ans=0;
    while(x<=n)
    {
        x *= 8;
    }
    x /= 8;
    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 8;
        ans = ans*10 +lastDigit;
    }
    cout<<ans;
}
void decimalToHexadecimal()
{
    int n;
    cout<<"enter the decimal number"<<endl;
    cin>>n;
    string s="";
    int x=1;
    while(x<=n)
    {
        x *= 16;
    }
    int lastDigit = 0;
    x /= 16;
    while(x>0)
    {
        lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;
        if(lastDigit >= 0 && lastDigit<=9)
        {
            s = s + to_string(lastDigit);
        }
        if(lastDigit >= 10 && lastDigit<=15)
        {
            char c = 'A' + lastDigit-10;
            s.push_back(c);
        }
    }
    cout<<s;
}
int main()
{
   decimalToHexadecimal();
    
}