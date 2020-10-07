#include<iostream>
using namespace std;

class test
{
 mutable int a;
 int b;
 public:
     test(int x,int y)
     {
         a=x;
         b=y;
     }
     void square_a() const{
     a=a*a;
     }
     void display() const{
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
     }
};

int main()
{
    const test x(2,3);
    cout<<"Initial value"<<endl;
    x.display();
    x.square_a();
    cout<<"Final value"<<endl;
    x.display();
    return 0;
}


