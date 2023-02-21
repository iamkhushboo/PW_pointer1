#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two number ";
    cin>>x>>y;
    int*ptrx=&x;
    int *ptry=&y;
    int sum=0;
    sum=*ptrx+*ptry;
    int* sumxy=&sum;
    cout<<"sum of the two number "<<*sumxy;
    return 1;
}