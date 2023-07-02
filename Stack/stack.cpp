#include<bits/stdc++.h>
using namespace std;
int top = -1;
int mxstack = 3;
int stack_arr[3];

//function push
void push(int n)
{
    if(top<mxstack)
    {
        top++;
        stack_arr[top] = n;
    }
    else
    {
        cout<<"stack_overflow"<<endl;
    }
}

//function pop
void pop()
{
    int popped_value;
    if(top>=0)
    {
        int popped_value = stack_arr[top];
        top--;
        cout<<"The popped value is "<<popped_value<<endl;
    }
    else
    {
        cout<<"stack_underflow"<<endl;

    }

}

//function print
void print()
{
    for(int i=0; i<=top; i++)
    {
        cout<<stack_arr[i]<<" ";
    }
}

//function main
int main()
{
    while(1)
    {
        cout<<"Enter command"<<endl;
        string s;
        cin>>s;
        if(s=="push")
        {
            int a;
            cout<<"Enter a number to push on your stack"<<endl;
            cin>>a;

            push(a);
        }
        else if(s=="pop")
        {
            pop();
        }
        else if(s=="print")
        {
            print();
        }
        else if(s=="end")
        {
            return 0;
        }

    }
}
