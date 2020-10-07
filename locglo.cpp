#include<iostream>
using namespace std;
int g;
void test_function()
{
    static int s;
//  holds()
    register int r;
    r=5;
    s=s+r*2;
    cout<<"Inside test_function"<<endl;
    cout<<"g="<<g<<endl;
    cout<<"s="<<s<<endl;
    cout<<"r="<<r<<endl;
}

int main()
{
    int a;
    g = 25;
    a = 17;
    test_function();
    cout<<"Inside main"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"g="<<g<<endl;
    test_function();
    return 0;
}
