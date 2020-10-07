#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,r,sum=0,temp;
int st,en;
cout<<"Enter the starting range of the number";
cin>>st;
cout<<"Enter the ending range of the number:";
cin>>en;
cout<<"Enter the value of n:";
cin>>n;
temp=n;
//cout<<"Enter the range :";
for(int n;n<=en and n>=st;++n)
{
//cin>>n;
//temp=n;
while(n>0)
{
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}

if(temp==sum)
cout<<"Armstrong number"<<endl;
else
cout<<"Not Armstrong Number";
return 0;
}
}
