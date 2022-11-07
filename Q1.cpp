#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the numbers:-\n";
    cin>>a>>b;
    try{
        if (b==0)
        throw 1001;
        c=a/b;
        cout<<"The result is "<<c;
    }
    catch(int e)
    {
        cout<<"Error "<<e<<": Divide by zero exception";
    }
}
