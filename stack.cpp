#include <iostream>
using namespace std;

void insert(int max)
{
    if(max<=3)
    {
        cin>>x;
        stack[max]=x

    }
    else{
        cout<<"overflow";
    }
}

void pop()
{
    if(max>0)
    {
        int ele=stack[max];
        max=max-1;
    }
    else{
        cout<<"underflow";
    }
    
}

int main()
{
    int max;
    cin>>max;
    int stack[max];
    int first=0;


    insert(max);
    pop();

    
}