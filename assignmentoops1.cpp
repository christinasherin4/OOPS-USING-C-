#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n,rev_no=0,r;
    cout<<"Enter a number:";
    cin>>n;

    while(n!=0){
          r=n%10;
          rev_no=rev_no*10+r;
          n/=10;
          }
          cout<<"Reversed number = "<<rev_no;
          return 0;
}
