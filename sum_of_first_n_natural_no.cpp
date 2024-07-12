#include<iostream>
using namespace std;

int total(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }

    return sum;
}

int main()
{
    int n;
    cout<<"Enter no. :";
    cin>>n;

    cout<<"Sum of first n natural no. is "<<total(n)<<endl;

    return 0;
}