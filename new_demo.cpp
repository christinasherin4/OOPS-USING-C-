/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x;
    cout<<"Please enter a real number";
    cin>>x;
    cout<<"The ceil("<<x<<")="<<ceil(x)<<endl;
    cout<<"The floor("<<x<<")="<<floor(x)<<endl;
return 0;
}*/

#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
   cout<<"The toupper("<<ch<<")="<<(char)toupper(ch)<<endl;
    cout<<"The tolower("<<ch<<")="<<(char)tolower(ch)<<endl;
    if(isdigit(ch))
        cout<<" "<<ch<<"is a digit!\n";
    else
        cout<<" "<<ch<<"is NOT a digit!\n";
return 0;
}
