#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the total number of elements to be stored in the array:";
    cin>>n;
    cout<<endl;

for(int i =0;i<n;++i)
{
    cout<<"Enter the number"<<i+1<<":";
    cin>>arr[i];
}

for(int i=1;i<n;++i)
{
    if(arr[0]<arr[i])
        arr[0]=arr[i];
}
cout<<"Largest element is:"<<arr[0];
return 0;
}
