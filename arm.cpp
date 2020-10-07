#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
void findArmstrongNumber();

void findArmstrongNumber(int a,int b)
{
    int p=0,temp,armst=0,count1=0;
    for(int i=a;i<b;i++)
    {
        int c=i;
        while(c>0)
            {
                count1++;
                c/=10;
                temp=i;
                while(temp!=0)
                {
                    p=temp%10;
                    armst +=pow(p,count1);
                    temp/=10;
                }
                count1=0;temp=0;
                if(i==armst)
                {
                    cout<<" The number "<<i<<" is an armstrong number ";
                    armst=0;
                }
            }
    }
}
int  main()
{
    int a,b;
    int count1=0;
    cin>>a>>b;
    findArmstrongNumber(a,b);
}

