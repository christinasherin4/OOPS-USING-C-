#include<stdio.h>
int s[10],top=-1;
void main()
{
    int value;
    printf("Enter the value");
    scanf("%d",&value);
     push(value);
}

void push(int value)
{
    if(top==9)
    {
        printf("Stack is full");
    }
    else{
        top=top+1;
        s[top]=value;
    }
}
