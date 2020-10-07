#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c=1,temp=0;
    cout<<"Enter the number of terms:\t";
    cin>>a;
    cout<<"Fibonacci series:"<<a<<b;
    for(int i=1;i<=a;++i)
    {
     if(i==1)
        {
          cout<<" "<<b;
          continue;
        }
    if(i==2)
        {
          cout<<c<<" ";
          continue;
        }
        temp=b+c;
        b=c;
        c=temp;
        cout<<temp<< " ";
    }
    return 0;

}
