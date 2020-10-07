#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
 int n,i,j,k,l;
 printf("How many rows:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  for(int j=0;j<=i;j++)
    cout<<" ";
    {

    for(k=1;k<=i;k++)
        cout<<k;
     for(l=i-1;l>0;l--)
        cout<<l;
        n=n-1;
        cout<<"\n";
 }
 return 0;
}
