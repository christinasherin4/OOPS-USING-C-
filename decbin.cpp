#include<stdio.h>
#include<iostream>
using namespace std;
long long decbin(int);

int main()
{
    int n,bin;
    cout<<"Enter a decimal number :";
    cin>>n;
    bin=decbin(n);
    cout<<n<<" in decimal " << "is "<<bin<<" in binary";
    return 0;
}

long long decbin(int n)
{
    long long bin=0;
    int r,i=1,count1=1;
    while(n!=0)
    {
        r = n%2;
        //cout<<count1++<<n<<remainder<<n/2<<endl;
        n/=2;
        bin += r*i;
        i *= 10;
    }
    return bin;

}
