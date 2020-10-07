#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a value of n";
    cin>>n;
    for(int i=2;i<n;i++)
        for(int j=2;j<i;j++)
    {
        if(i%j==0)
            break;
        else if(i==j+1)
            cout<<i<<" ";
    }
    return 0;
}
