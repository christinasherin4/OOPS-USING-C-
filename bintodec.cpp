#include<stdio.h>
#include<iostream>
using namespace std;
void dec2bin(int n)
{
    int bin[34];
    int i=0;
    while(n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<bin[j];
}
int main()
{
    int n=17;
    dec2bin(n);
    return 0;
}
