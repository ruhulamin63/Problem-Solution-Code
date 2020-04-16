#include<iostream>

using namespace std;

#define stack_size 10

    int top;
    char stack[10];

    stack_initialize()
    {
        top = -1;
    }

void push(char x)
{
     if(top >= stack_size-1)
        cout<<"Stack is full"<<endl;
     else
	{
            top++; //increase top by 1
        stack[top] = x; //insert the item on top

        cout<<"The push value="<<stack[top]<<endl;
	}
}

void pop() //pop function is not returning
{
    if(top<0)
        cout<<"Stack is empty"<<endl;
    else
	{
    	char x = stack[top];
            top--;

        cout<<"\nThe stack top value="<<stack[top]<<endl;
	}
}

int main()
{
    push('j');
    push('k');
    push('l');
        pop();

    return 0;
}
