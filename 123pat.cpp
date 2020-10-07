#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
 int i,j,k,l,n;
 cout<<"no of rows:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n-i;j++)
   {
     cout<<"   ";
   }
   for(k=1;k<=i;k++)
   {
      cout<<"  "<<k+1;
   }
   for(l=i-1;l>=1;l--)
   {
      cout<<"  "<<l+1;
   }
   cout<<"\n";
 }
 return 0;
}
