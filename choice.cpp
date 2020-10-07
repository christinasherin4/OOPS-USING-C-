#include<stdio.h>
#include<iostream>
using namespace std;
void showchoice()
{
    cout<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.Division";
    cout<<"\nEnter your choice:"<<endl;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int ch,a,b;
    do{
        showchoice();
        cin>>ch;
        cout<<"Enter two operands : "<<endl;
        cin>>a>>b;
        switch(ch)
        {
        case 1:
            {
               cout<<add(a,b);
               cout<<endl;
               break;
            }

        case 2:
            {
                cout<<sub(a,b);
                cout<<endl;
                break;
            }
        case 3:
            {
                cout<<mul(a,b);
                cout<<endl;
                break;
            }
        case 4:
            {
                cout<<div(a,b);
                cout<<endl;
                break;
            }
        default:
            {
                cout<<"Invalid choice";
                cout<<endl;
                break;
            }
    }
    }while(ch!=4);
return 0;
}
