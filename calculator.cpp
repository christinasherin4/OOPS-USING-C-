#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char i;
    float a,b;
    cout<<"Enter the operator +,-,/,%,* \n";
    cin>>i;
        cout<<"Enter value of a and b";
    cin>>a>>b;
    switch(i)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '/':
        cout<<a/b;
        break;
    case '%':
        cout<<int(a)%int(b);
        break;
    case '*':
        cout<<a*b;
        break;
    default:
        cout<<"No such operator exists in this calculator";
        break;
    }
    return 0;
}

