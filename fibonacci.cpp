#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int fib1=0;
    int fib2=1;
    
    for(int i=0;i<n;i++)
    {
        cout<<fib1<<" ";
        int fib3=fib1+fib2;
        fib1=fib2;
        fib2=fib3;
        
    }
}

int main()
{
    int n;
    cin>>n;
    
    fibonacci(n);
    
    return 0;
}