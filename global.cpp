/*#include<iostream>
using namespace std;
int x=0;
Inline void f1()
{
    x++;
}
Inline void f2()
{
    x+=4;
    f1();
}
int main()
{
    f2();
    cout<<x<<endl;
return 0;
}*/

/*#include<iostream>
using namespace std;
int x;
void fun();

int main()
{
    x=4;
    fun();
    cout<<x<<endl;
return 0;
}

void fun()
{
    int x=10;
    cout<<x<<endl;
}*/

/*#include<iostream>
using namespace std;
int x;
void fun(int x)
{
    cout<<x<<endl;
    x=x+5;
}
int main()
{
    x=4;
    fun(x/2+1);
    cout<<x<<endl;
return 0;
}*/

/*#include<iostream>
using namespace std;
void fun(int &y)
{
    cout<<y<<endl;
    y=y+5;
}

int main()
{
    int x=4;
    fun(x);
    cout<<x<<endl;
return 0;
}*/

/*#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,s[10];
    //for(i=0,j=0;i<10&&j<5;i+=2,j++)
      //  printf("%d\t%d\n",i,j);
    //for(i=79;i>=0&&s[i]=='';i--)
      //  ;
    for(i=79;i>=0&&s[i]=='';i--)
return 0;
}*/

/*include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    for(int i = 0;i<10;i++)
        cout<<i<<endl;
    if(i>=0)
        cout<<"i is big\n";
return 0;
}*/

/*#include<iostream>
using namespace std;

int main()
{
 int arr[3][2]={{4,5},{8,7},{3,4}};
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<2;j++)
  {
   if(arr[i][j]>7)
    break;
   cout<<arr[i][j]<<endl;
  }
return 0;
 }
}*/

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   double a=0.0;
   int i;
   for(i=0;i<f(a);i++)
    {
        int x=......;
        int y=......;
        a=f(a+i*j);
    }
return 0;
}
