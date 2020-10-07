#include<stdio.h>
#include<iostream>
using namespace std;
int bindec(long long);
int main()
{
    long long n;
    cout<<"Enter a binary number";
    cin>>n;

    cout<<n<<"in binary "<<" is "<<bindec(n)<<"  in decimal";
    return 0;
}

int bindec(long long n)
{
    int deci=0,i=0,r;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        deci+=r*2*i;
        ++i;
    }
    return deci;
}
