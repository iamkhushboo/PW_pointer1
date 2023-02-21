#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter any integer value ";
    cin>>x;
    int *ptr=&x;
    cout<<"address of the integer where the value is store "<<ptr;
}