#include <iostream>
using namespace std;
int MAX=100;
int stack[100];
int top=-1;
int size;
void push()
{
    int item;
    if(top>MAX-1)  
    {
        cout<<"STACK OVERFLOW !"<<endl;
    }
    else
    {
        cout<<"Enter Value to push :";
        cin>>item;
        top++;
        stack[top]=item;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"STACK UNDEFLOW !"<<endl;
    }
    else
    {
        cout<<"Poped Element is :"<<stack[top];
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Element in STACK :";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i];    
        }
        cout<<endl;
    }
    else
    {
        cout<<"STACK is EMPTY !"<<endl;
    }
}
int main()
{
    int ch;
    while(1)
    {
        cout<<endl;
        cout<<"1:Push"<<endl;
        cout<<"2:Pop"<<endl;
        cout<<"3:Display"<<endl;
        cout<<"4:exit"<<endl;
        cout<<"Enter Choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
            cout<<"Invalid choice !"<<endl;
        }
    }

    return 0;
}
